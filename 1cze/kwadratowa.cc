#include <iostream>
using namespace std;
template<typename T>

class Bank{
    public:
        Bank(const T &d, const T &c, const T &o) : depozyt(d), czas(c), oprocent(o) {}

	~Bank(void) { }

	const T odsetki(void){
	    return depozyt*czas*oprocent/100/365;
	}

    private:
        const T depozyt;
	const T czas;
	const T oprocent;
};



int main(){
    Bank<double> opr(1000.0, 61.0, 2.5);
    const double x = opr.odsetki();
    cout << x << endl;
}
