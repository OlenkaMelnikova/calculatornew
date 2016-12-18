#include <iostream>
#include "calculator.hpp"
using namespace std;

int main() {

        double a;
        double b;
        int c;	
    
    cout<< "Введите значение a\n ";
    cin >> a;
    cout<< "Введите значение b\n ";
    cin >> b;
    cin >> c;
    
    cout<<"\nCумма равна: " << sum(a,b);
    cout<<"\nРазность равна: "<< sub(a,b);
    cout<<"\nПроизведение равно: "<< pow1(a,b);
    double * res = dev(a, b);
	if (res!=nullptr)
		cout << "a / b = " << * res << endl;
	else
		cout << "a/0 -> error" << endl;
	delete res;
    double *r = sqrt1(a);
	if (r) cout << "a^0.5=" << *sqrt1(a) << endl;
	else cout << "a < 0 -> error" << endl;
	delete r;    
   
    cout<<"\na в степени c равно: "<< involution(a,b);

  
 system("pause");
}
