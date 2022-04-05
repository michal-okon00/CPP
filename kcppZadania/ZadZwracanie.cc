#include <iostream>

using namespace std;

int wartosc(){
    int x1;
    cout<<"Zwracanie przez wartość"<<endl;
    cin>>x1;
    return x1;
}
	
int x2;

int &referencje(){
    cout<<"Zwracanie przez referencje"<<endl;
    return x2;
}
	
int x3;

int *wskaznik(){
    int *x3;
    cout<<"Zwracanie przez wskaznik"<<endl;
    cout<<"Adres zmiennej x3:"<<endl;
    return x3;
}

int *tablica(){

   static int x4[10];
   
   for (int i = 0; i < 10; ++i) {
      x4[i] = i;
      cout << x4[i] << endl;
   }

   return x4;
}

int main()
{
    cout<<wartosc()<<endl;
	
	cout<<"-------"<<endl;
	
	cout<<"Podaj wartosc x2"<<endl;
    cin>>x2;
    cout<<referencje()<<endl;
	
	cout<<"-------"<<endl;
	
	int *y3;
    y3 = wskaznik();
    cout<<y3<<endl;
	
	cout<<"-------"<<endl;
	
	cout<<"Zwracanie tablicy"<<endl;
	int *p4;
	p4 = tablica(); //Zwracamy wskaznik na początek tablicy w pamięci
	cout<<p4<<endl;

	return 0;
}