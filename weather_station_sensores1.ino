/* 
   Sketch function: Temperature sensor Sketch with TMP36
   Dev: Tatiana C
   Date: 12-09-2024   
*/

#define LED        10
//#define SensorVal  0
#define tempVal    0
#define motor 9


// int sensorVal = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  float temp = 0;
  int sensorVal = analogRead (A0);
  Serial.print("sensorVal input: ");
  Serial.println(sensorVal);
  
  // es para un TMP36
  temp = ( sensorVal * (500.0 / 1023.0) - 50.0 );
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print(" \xB0");
  Serial.println("C");
  
  /*
      10 bits => 0 and (2^10)-1 = 0 -> 1023
      0    => 0 V
      1023 => 5 V
      
      TMP36 => Produce 500 Mv (0.5 V) a 0 °C.
      Cada grado aumenta en 10 mV (0.01 V) 
      
      offset => Margen de error  (Restar offset) 50.0
     
  */
  
  
    //LM35 
  
  
  
 //Lógica de control para el motor y el LED

  
if (temp >0 && temp <=25){
digitalWrite(motor, HIGH); 
if (temp> 30) { 
digitalWrite(LED, HIGH); 
delay(500); 
digitalWrite(LED, LOW);
 delay(500); 
} else 
{ digitalWrite(LED, LOW); 
} } else if (temp>= 10 && temp< 25) 
{ digitalWrite(motor, LOW); 
digitalWrite(LED, LOW); 
} else if (temp< 10) { 
digitalWrite(motor, LOW); 
digitalWrite(LED, HIGH); 
}

  
  delay(1000); //1 seconds
}