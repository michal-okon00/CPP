#include <iostream>
#include <sstream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	double a = 10.987654321, d = a/10;
	double b = 5.123456789, e = b*10;
	double c = 1.987654321, f = c*10;
	cout << fixed;
	cout << "    output:" <<setw(10)<<setprecision(3)<<a<<"      T:"<<setw(7)<<setprecision(3)<<d<<endl;
    cout << fixed;
    cout << "    output1:" <<setw(10)<<setprecision(4)<<b<<"     T:"<<setw(9)<<setprecision(5)<<e<<endl;
    cout << fixed;
    cout << "    output2:" <<setw(10)<<setprecision(4)<<c<<"     T:"<<setw(10)<<setprecision(6)<<f<<endl;
    cout << "-------------------------------------------------"<<endl;
    cout << fixed;
    cout << "    average:" <<setw(10)<<setprecision(4)<<(a+b+c)/3<<"     T:"<<setw(10)<<setprecision(6)<<(d+e+f)/3<<endl;
}