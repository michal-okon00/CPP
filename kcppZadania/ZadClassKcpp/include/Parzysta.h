#ifndef Parzysta_H
#define Parzysta_H 1
#include <iostream>
using namespace std;

void ZadKcpp::parzysta(){
	cout<<"Sprawdzenie Parzystosci"<<endl;
	cout<<"Podaj liczbe"<<endl;
	int x;
	cin>>x;
	cout<< ( (x&1) ? "Nieparzysta" : "Parzysta") << endl;
}

#endif
