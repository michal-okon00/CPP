#ifndef ROZNICE_H
#define ROZNICE_H 1
#include <iostream>
#include <iomanip>
#include <math.h>
#include <sstream>
using namespace std;

void ZadKcpp::roznice(){
	cout<<"Język C"<<setw(32)<<"|"<<"Język C++"<<setw(30)<<"|"<<endl;
    cout<<setfill('-')<<setw(39)<<"|"<<setw(39)<<"|"<<endl;
    cout<<setfill(' ')<<"printf(”Napis”);"<<setw(23)<<"|"<<"cout << ”Napis”;" <<setw(23)<<"|"<<endl;
    cout<<setfill('-')<<setw(39)<<"|"<<setw(39)<<"|"<<endl;
    cout<<setfill(' ')<<"char *pNap = ”Napis”;"<<setw(18)<<"|"<<"char *pNap = ”Napis”;" <<setw(18)<<"|"<<endl;
    cout<<"printf(”%s”, pNap);"<<setw(20)<<"|"<<"cout << pNap;" <<setw(26)<<"|"<<endl;
    cout<<setfill('-')<<setw(39)<<"|"<<setw(39)<<"|"<<endl;
    cout<<setfill(' ')<<"printf(”%c”, 'a');"<<setw(21)<<"|"<<"cout << 'a';"<<setw(27)<<"|"<<endl;
    cout<<setfill('-')<<setw(39)<<"|"<<setw(39)<<"|"<<endl;
    cout<<setfill(' ')<<"char znak = 'a';"<<setw(23)<<"|"<<"char znak = 'a'"<<setw(24)<<"|"<<endl;
    cout<<"printf(”%c”, znak);"<<setw(20)<<"|"<<"cout << pNap;" <<setw(26)<<"|"<<endl;
    cout<<setfill('-')<<setw(39)<<"|"<<setw(39)<<"|"<<endl;
    cout<<setfill(' ')<<"printf(”\\n”);"<<setw(26)<<"|"<<"cout << endl;"<<setw(26)<<"|"<<endl;
    cout<<setw(39)<<"|"<<"cout << '\\n';"<<setw(26)<<"|"<<endl;
    cout<<setfill('-')<<setw(39)<<"|"<<setw(39)<<"|"<<endl;
}

#endif
