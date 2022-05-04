#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Test{
    int liczba;
    string slowo;
} test1;

int main(){
    Test test1;
    test1.liczba = 5;
    test1.slowo = "przyklad";

    cout << test1.liczba << " " << test1.slowo << endl;

    return 0;
}
