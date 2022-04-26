#include <iostream>
using namespace std;

int main() {
	int tab[] = {11,22,33,44,55}, i = 3, *p, *q;

	p = &tab[0] + 3;
	cout << "*p     = " << *p << endl;

	p = p - 2;
	cout << "*p     = " << *p << endl;

	q = tab;
	cout << "*(q+2) = " << *(q+2) << endl;
	cout << "q[2]   = " << q[2]   << endl;

	cout << "q[i]   = " << q[i] << endl;
	cout << "i[q]   = " << i[q] << endl;   //   <-- Proszę to wyjaśnić
/*	
	Zapisy i[q] oraz q[i] można przedstawić w postaci *(q+i) lub *(i+q)
	Przemienność dodawania powoduje że te zapisy są sobie równe,
	co oznacza ze i[q] oraz q[i] również są sobie równe.
	
*/
	i++;
	cout << "*(i+q)   = " << *(i+q) << endl;

/*   Zadanie 3.2 */


	return 0;
}