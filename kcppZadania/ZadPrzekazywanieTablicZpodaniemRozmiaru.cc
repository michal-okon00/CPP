#include <iostream>

using namespace std;

void przekaz(int tab[], int rozmiar){
   for (int i = 0; i < rozmiar; i++){
	cout << i << "\t" << tab[i] << endl;
   }
}


int main () {

   int tablica1D[6] = {1,2,3,4,5,6};
   przekaz(tablica1D,6);
   return 0;
}