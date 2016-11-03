#include <iostream>
#include "calculator.hpp"
#include <math.h>
using namespace std;

int main() {

        float a;
        float b;
        
    
float sum(float a, float b);
float sub(float a, float b); 
float pow1(float a, float b);
float dev(float a, float b);
float involution(float a, float b);
float sqrt1(float a);
       
    setlocale(LC_ALL,"rus");
    
    cout<< "Введите значение a\n ";
    cin >> a;
    cout<< "Введите значение b\n ";
    cin >> b;
    
    cout<<"\nCумма равна: " << sum(a,b);
    cout<<"\nРазность равна: "<< sub(a,b);
    cout<<"\nПроизведение равно: "<< pow1(a,b);
    cout<<"\nЧастное равно: "<< dev(a,b);
    cout<<"\na в степени c равно: "<< involution(a,b);
    cout<<"\nквадратный корень из c равен: "<<sqrt1(a) ;

  
 
    
     return 0;
}
