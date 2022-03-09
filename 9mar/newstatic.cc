
#include <iostream>
using namespace std;

static int ncall = 0;

//----------------------------------------------
int comp(int c) {
	static int ncall = 0;
	ncall++;
	if(!c)
		return ncall;
	return c;
}

//----------------------------------------------
int main(){
	int a = 5, b = -10;
	
	const int eee;
	cout<<eee<<endl;

	cout << comp(a) << ' ' << comp(b);
	//comp1();
	cout << "\nFunkcja zostala wywolana " << comp(0) << " razy.\n";

//	cout << comp1() << endl;
	return 0;
}

