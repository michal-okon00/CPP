#include <iostream>
using namespace std;

void funkcja1(){
	int x;
	cin>>x;
	if(x & 1) cout<<"Nieparzysta"<<endl;
	else cout<<"Parzysta"<<endl;
}

void funkcja2(){
	int x;
	cin>>x;
	if(x%2 == 0) cout<<"Parzysta"<<endl;
	else cout<<"Nieparzysta"<<endl;
}

void funkcja3(){
	int x;
	cin>>x;
	cout << ( (x&1) ? "Nieparzysta" : "Parzysta") << endl; 
}







int main(){
	int y;
	cout<<"Sprawdzanie parzystosci"<<endl;
	cin>>y;
	cout<<"Podaj liczbe"<<endl;

		if(y == 1){
			funkcja1();}
		else if(y == 2){
			funkcja2();}
		else if(y == 3){
			funkcja3();}
	
}