#include <iostream>
using namespace std;

class Figura{
  public:
    virtual void Obwod() = 0;
    virtual void Pole() = 0;
};

class Kwadrat : public Figura{
  public:
    float bok_a
    Kwadrat(float a){
      bok_a = a;
    float Obwod(a){
      return 4*a;
    }
    float Pole(a){
      return a*a;
    }
};





int main{
  cout<<"Kwadrat"<<endl;
  Figura *objKwadrat = new Kwadrat(5);
  cout << "Obwod:" << objKwadrat->Obwod() << endl;
  cout << "Pole:" << objKwadrat->Pole() << endl;
}
