#ifndef ARYTMETYKA_H
#define ARYTMETYKA_H 1
#include <iostream>
#include <iomanip>
using namespace std;

void ZadKcpp::arytmetyka(){
	cout<<endl;
	int a = 0;
	int b = 0;
	int c = 0;
	int *x = &b;
	int y = &b - &a;

	cout<<"A, B, C:"<<setw(5)<<a<<setw(5)<<b<<setw(5)<<c<<endl;
	*x += 10;
	cout<<"A, B, C:"<<setw(5)<<a<<setw(5)<<b<<setw(5)<<c<<endl;
	*(x+y) = *x *2;
	cout<<"A, B, C:"<<setw(5)<<a<<setw(5)<<b<<setw(5)<<c<<endl;
	*x += *(x+y);
	cout<<"A, B, C:"<<setw(5)<<a<<setw(5)<<b<<setw(5)<<c<<endl;
	*(x-y) = 2**(x+y);
	cout<<"A, B, C:"<<setw(5)<<a<<setw(5)<<b<<setw(5)<<c<<endl;
	*x += *(x+y);
	cout<<"A, B, C:"<<setw(5)<<a<<setw(5)<<b<<setw(5)<<c<<endl;
	*(x+y) += *(x-y);
	cout<<"A, B, C:"<<setw(5)<<a<<setw(5)<<b<<setw(5)<<c<<endl;
	*x += *(x+y) - *(x-y);
	cout<<"A, B, C:"<<setw(5)<<a<<setw(5)<<b<<setw(5)<<c<<endl;
	*(x-y) *= 2;
	cout<<"A, B, C:"<<setw(5)<<a<<setw(5)<<b<<setw(5)<<c<<endl;
	*x += *(x-y) - *(x+y);
	cout<<"A, B, C:"<<setw(5)<<a<<setw(5)<<b<<setw(5)<<c<<endl;
}

#endif
