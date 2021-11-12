#include <iostream>

using namespace std;

int main()
{
    int antiguedad = 0;
    int puesto = 0;         //gerente=0, cajero=1; ayudante=0//
    int sueldo = 0;
    
    cout << "Dime tu puesto: \n";
    cin >> puesto;
    
    cout << "Dime tu antiguedad: \n";
    cin >> antiguedad;
    
if(puesto == 0){ 
    if (antiguedad <= 3)
            {
       sueldo = (antiguedad * 6000) + 10000;
       cout << "Tu sueldo es de: \n" << sueldo;
        
    }
    else if (antiguedad <= 10)
            {
       sueldo = (antiguedad/2 * 6000) + 19000;
       cout << "Tu sueldo es de: \n" << sueldo;
       
    }
    else if (antiguedad >= 11)
            {
       sueldo = (antiguedad/3 * 9000) + 22000;
       cout << "Tu sueldo es de: \n" << sueldo;
       
    }
  }
else if(puesto == 1){
    if (antiguedad <= 3)
            {
        sueldo = (antiguedad * 6000) + 5000;
        cout << "Tu sueldo es de: \n" << sueldo;
           
    }
    else if(antiguedad <= 10)
           {
        sueldo = (antiguedad/2 * 6000) + 14000;
        cout << "Tu sueldo es de: \n" << sueldo;
            
    }
    else if(antiguedad >= 11)
           {
        sueldo = (antiguedad/3 * 9000) + 17000;
        cout << "Tu sueldo es de: \n" << sueldo;
            
    }
  }
else if (puesto == 2){
    if (antiguedad <= 3)
            {
        sueldo = (antiguedad * 6000);
        cout << "Tu sueldo es de: \n" << sueldo;
        
    }
    else if (antiguedad <= 10)
            {
        sueldo = (antiguedad/2 * 6000) + 9000;
        cout << "Tu sueldo es de: \n" << sueldo;
        
    }
    else if (antiguedad >= 11)
            {
        sueldo = (antiguedad/3 * 9000) + 12000;
        cout << "Tu sueldo es de: \n" << sueldo;
        
    }
  }
    
    return 0;
}
