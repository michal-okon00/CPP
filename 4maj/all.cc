#include <iostream>
using namespace std;

class Osoba{
   private:
      int wiek;
      
   public:
     Osoba(int zmienna){
         wiek = zmienna;}

     ~Osoba(){
         cout<<"Usunieto obiekt"<<endl;
     }
     void set_wiek(int age){
         wiek = age;
     }
     Osoba& set_wieknew(int age){
         wiek = age;
	 return *this;
     }


     int get_wiek(){
         return wiek;
     }
};



int main(){
    Osoba Jan(5);

    cout <<Jan.get_wiek()<<endl;
    Jan.set_wiek(20);
    
    cout << Jan.get_wiek() <<endl;
    cout << Jan.set_wieknew(30).get_wiek() <<endl;
    
    Osoba *Kuba = new Osoba(3);
    delete Kuba;
    return 0;
}
