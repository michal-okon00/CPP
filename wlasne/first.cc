#include <iostream>
using namespace std;


int funkcja(){
	int wynik;
	int a = 1;
	int b = 2;
	wynik = a+b;
	return wynik;
}

int main(){
	bool bo;
	int x;

	cout <<"bo 1: "<< bo << endl;
	cout <<"x 1: "<< x << endl;
	bo = true;
	x = 5;
	cout <<"bo 2: " << bo << endl;
	cout <<"x 2: " << x << endl;

	cout <<"funkcja"<<funkcja()<< endl;
	return 0;
}
