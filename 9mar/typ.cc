#include <iostream>

using namespace std;

typedef float myfloat;
typedef int myint;
typedef double mydouble;

int main(){

	myint i = 5;
	myfloat f = 5;
	mydouble d = 5;

	cout<<"myint: "<<i<<" size: "<<sizeof(i)<<endl;
	cout<<"myfloat: "<<f<<" size: "<<sizeof(f)<<endl;
	cout<<"mydouble: "<<d<<" size: "<<sizeof(d)<<endl;

	return 0;
}

