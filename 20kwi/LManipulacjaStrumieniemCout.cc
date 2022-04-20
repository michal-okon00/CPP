#include <iostream>
#include <sstream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	double f = 10.98765;
	cout << fixed;
	cout << "    output:" <<setfill(' ')<<setw(10)<<setprecision(3)<<f<<endl;
	cout << scientific;
	cout << "    output:" <<setfill(' ')<<setw(10)<<setprecision(3)<<f<<endl;
}
