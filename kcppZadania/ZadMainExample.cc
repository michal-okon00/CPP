
#include <iostream>
#include <cmath>

using namespace std;

extern "C" int dodaj(){
        int x;
        int y;
        int wynik;
        printf("Dodawanie liczb calkowitych\nPodaj 1 liczbe ");
        scanf(" %d",&x);
        printf("Podaj 2 liczbe ");
        scanf(" %d",&y);
        wynik = x+y;
        return wynik;
    }


extern "C" int odejmij(){
        int x;
        int y;
        int wynik;
        printf("Odejmowanie liczb calkowitych\nPodaj 1 liczbe ");
        scanf(" %d",&x);
        printf("Podaj 2 liczbe ");
        scanf(" %d",&y);
        wynik = x-y;
        return wynik;
    }


void prostokat(){
    cout<<"Funkcja liczy pole i obwod prostokata"<<endl;
    float a,b,pole,obwod;
    cout<<"Podaj a "<<endl;
    cin >> a;
    cout<<"Podaj b "<<endl;
    cin >> b;
    pole = a*b;
    obwod = 2*(a+b);
    cout<<"Pole prostokąta wynosi: "<<pole<<endl;
    cout<<"Obwod prostokąta wynosi: "<<obwod<<endl;
}

void kolo(){
    cout<<"Funkcja liczy pole i obwod kola"<<endl;
    float r,pole,obwod;
    cout<<"Podaj promien "<<endl;
    cin >> r;
    pole = (M_PI * r) * (M_PI * r);
    obwod = 2 * M_PI * r;
    cout<<"Pole kola wynosi: "<<pole<<endl;
    cout<<"Obwod kola wynosi: "<<obwod<<endl;
}

void napis(){
    cout<<"Wypisuje podany napis"<<endl;
    string s;
    cin >> s;
    cout << s;
}

int main(int argc, char *argv[])
{
    for(int i=1;i<argc;i++){
        switch(*argv[i]){
            case '1':
                cout<<dodaj()<<endl;
                break;
            case '2':
                cout<<odejmij()<<endl;
                break;
            case '3':
                prostokat();
                break;
            case '4':
                kolo();
                break;
            case '5':
                napis();
                break;
        }
    }
    return 0;
}