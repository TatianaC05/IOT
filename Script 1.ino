// C++ code
//
#define led_red 11
#define led_yellow 12
#define led_green 13

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
  
  // Iniciar con todas los led apagados
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, LOW);
}

void loop() {
   // 1. led rojo
  digitalWrite(led_red, HIGH);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, LOW);
  delay(5000); 
  // 2. Led amarillo
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, HIGH);
  digitalWrite(led_green, LOW);
  delay(3000);
  
  // 3. Led verde
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, HIGH);
  delay(5000); 
  
  // 4. Led amarillo
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, HIGH);
  digitalWrite(led_green, LOW);
  delay(3000); 
}
