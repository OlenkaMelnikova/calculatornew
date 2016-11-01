#include <iostream>

#include "calculatornew.hpp"
using namespace std;

int main()
{
    float a, b;
    
double sum(float a, float b);
double sub(float a, float b); 
double pow1(float a, float b);
double dev(float a, float b);
double involution(float a, float b);
double sqrt1(float a);
       
    setlocale(LC_ALL,"rus");
    
    cout<< "Введите значение a\n ";
    cin >> a;
    cout<< "Введите значение b\n ";
    cin >> b;
    
   cout<<"\nCумма равна: " << sum(a,b);
   cout<<"\nРазность равна: "<< sub(a,b);
   cout<<"\nПроизведение равно: "<< multiplication(a,b);
   cout<<"\nЧастное равно: "<< dev(a,b);
   cout<<"\na в степени c равно: "<< involution(a,b);
   cout<<"\nквадратный корень из c равен: "<<sqrt1(a) ;
  
    
    
     return 0;
}
