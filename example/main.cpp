#include <iostream>

#include "calculatornew.hpp"
using namespace std;

int main()
{
    float a, b;
    
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
    
   cout<<"\nresult1= " << sum(a,b);
   cout<<"\nresult2= "<< sub(a,b);
   cout<<"\nresult3="<< multiplication(a,b);
   cout<<"\nresult4="<< dev(a,b);
   cout<<"\nresult5="<< involution(a,b);
   cout<<"\nresult6= "<<sqrt1(a) ;
  
    
    
     return 0;
}
