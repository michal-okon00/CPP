#include <iostream>
#include <iomanip>
#include <math.h>
#include <sstream>
#include <ZadKcpp.cc>
using namespace std;

int main(){
	while(1){
	    cout<<"============================"<<endl;
    	cout<<"Wybierz zadanie do wykonania"<<endl;
    	cout<<"----------------------------"<<endl;
    	cout<<"1) Sprawdzanie parzystosci za pomoca operatora warunkowego [4.3]"<<endl;
    	cout<<"2) Zwracanie przez wartosc [2.1]"<<endl;
    	cout<<"3) Arytmetyka wskaznikow [3.3]"<<endl;
    	cout<<"4) Przyklad manipulacji strumieniem cout [4.0]"<<endl;
    	cout<<"5) Przykladowe roznice miedzy C a C++ [4.2]"<<endl;
    	cout<<"Inne) Wyjdz z programu"<<endl;
    	int option;
    	cin>>option;
    	
    	ZadKcpp obiekt;
    	
    	switch(option){
    		case 1:
    			obiekt.parzysta();
    			cout<<endl;
    			break;
    		case 2:
    			cout<<"Zwrocono: "<<obiekt.zwracanie()<<endl;
    			break;
    		case 3:
    			obiekt.arytmetyka();
				break;
			case 4:
				obiekt.manipulacja();
				break;
			case 5:
				obiekt.roznice();
				break;
    		default:
    			return 0;
    	}
    	
    }
    	
}
