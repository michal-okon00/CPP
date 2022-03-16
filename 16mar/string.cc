/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10,
 * \brief String w C++
 * v0.02 2020.02.29
 */

#include <iostream>
#include <string>
using namespace std;

int integ(){
	int o = 5;
	cout<<"integer"<<endl;
//	return o;
}

int main(){
	integ();
  //https://pl.wikibooks.org/wiki/C%2B%2B/String

  string napis1;
  napis1 = "text1";

  //inicjalizowanie łańcucha znaków w miejscu jego tworzenia
  string napis2("text2");

  //operator przypisania
  string napis3 = "text3";

  cout <<"napis1: "<< napis1 << endl
    <<"napis2: "<< napis2 << endl
    <<"napis3: "<< napis3 << endl;

  string napis4(10,'X');

  cout <<"napis4: " << napis4 << endl;

  //Manipulacja stringami
  string a1, b1;
  a1 = '1';
  b1 = '2';
  a1 = b1;
  cout <<"a1=b1: "<< a1 << endl;
  
  b1 = '5';
  cout <<"b1 po zmianie b1: "<<b1<<endl;
  /* //Sprawdzenie adresow
   * cout << &a1 << endl;
   * cout << &b1 << endl; */

  string a,b,c;
  a = "aabbcco";
  b = "aabbccd";
  c = "gosia";

  // porównywanie napisów
  if (a == c) cout << "a i c sa takie same\n";
  cout << &a << endl;
  cout << &c << endl;


  if (a != b) cout << "a i b sa rozne\n" ;

  // porządek leksykograficzny
  cout << "napis a ("<<a<<") poprzedza napis b ("<<b<<"): ";
  if (a < b) cout << "prawda\n";
  else cout << "nieprawda\n";

  // łączenie łańcuchów
  a = "mal"+ a;

  cout << "napis a ("<<a<<") poprzedza napis b ("<<b<<"): ";
  if (a < b) cout << "prawda\n";
  else cout << "nieprawda\n";

  
  // modyfikacja
  b[0] = '_';

  cout << "zmieniony wyraz b: "<<b<<'\n';



  return 0;
}
