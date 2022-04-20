#include <iostream>
using namespace std;
int main(){

	int x=1,y=2,z=3;

	int result[] = {4,4,4,4};

	result[0] *= -++x*x--+-y--%++z;
	cout<<"0.  "<<result[0]<<endl;

	result[1] *= -(++x)*(x--)+-(y--)%(++z);
	cout<<"1.  "<<result[1]<<endl;

}


