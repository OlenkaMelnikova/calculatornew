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
    cout << roundp(sum(a, b)) << endl;	
    cout << roundp(sub(a, b)) << endl;	
    cout << roundp(pow1(a, b)) << endl;
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
    cout << roundp(involution(a, b)) << endl;
	
 system("pause");
}
