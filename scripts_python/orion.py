'''
Script description: Get all data about solar system
'''
import os
import requests

os.system('clear') #limpiar pantalla

def get_data():
    print(":::SOLAR SYSTEM INFORMATION:::")
    url = "https://api.le-systeme-solaire.net/rest/bodies/?filter%5B%5D=isComet"

    try:
        #Request to API
        res = requests.get(url)
        res.raise_for_status()
        #Convert answer to JSON (JS Object Notation)
        data = res.json()
        print(data)

    except requests.exceptions.RequestException as e:
        print(f"API error: {e}") 

get_data()


