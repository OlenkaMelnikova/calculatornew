#include <iostream>
#include "calculator.hpp"
using namespace std;

int main() {

        float a;
        float b;
    
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

  
 system("pause");
}
