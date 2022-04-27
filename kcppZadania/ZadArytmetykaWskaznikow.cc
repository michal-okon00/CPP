#include <iostream>
#include <iomanip>

using namespace std;

void Fun1(){
    int a = 10; int b = 20; int c = 30; int d = 40; int e = 50;
	int *p = &c;
	cout<< endl;
	cout << "*p     "  <<p<< endl;
	cout << "p++    "; p++;cout<<p<<endl;
	cout << "++p    "; ++p;cout<<p<<endl;
	cout << "++*p   "; ++*p;cout<<p<<endl;
	cout << "++(*p) "; ++(*p);cout<<p<<endl;
	cout << "++*(p) "; ++*(p);cout<<p<<endl;
	cout << "*p++   "; *p++;cout<<p<<endl;
	cout << "(*p)++ "; (*p)++;cout<<p<<endl;
	cout << "*(p)++ "; *(p)++;cout<<p<<endl;
	cout << "*++p   "; *++p;cout<<p<<endl;
	cout << "*(++p) "; *(++p);cout<<p<<endl;
	cout << endl;
}

void Fun2(){ 
	int A[5] = {10,20,30,40,50};
    int *p = A+2;
	cout << "*p     "  <<p<< endl;
	cout << "p++    "; p++;cout<<p<<endl;
	cout << "++p    "; ++p;cout<<p<<endl;
	cout << "++*p   "; ++*p;cout<<p<<endl;
	cout << "++(*p) "; ++(*p);cout<<p<<endl;
	cout << "++*(p) "; ++*(p);cout<<p<<endl;
	cout << "*p++   "; *p++;cout<<p<<endl;
	cout << "(*p)++ "; (*p)++;cout<<p<<endl;
	cout << "*(p)++ "; *(p)++;cout<<p<<endl;
	cout << "*++p   "; *++p;cout<<p<<endl;
	cout << "*(++p) "; *(++p);cout<<p<<endl;
	cout << endl;
}


void Fun3(){
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

int main(){
	Fun1();
	Fun2();
	Fun3();
}