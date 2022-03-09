#include <iostream>
#include <typeinfo>

using namespace std;

int fun(){
	int x = 5;
	float y = 5;
	double z = 5;
	cout<<"int size: "<<sizeof(x)<<endl;
	cout<<"float size: "<<sizeof(y)<<endl;
	cout<<"double sizw: "<<sizeof(z)<<endl;

	return 0;
}

int main(){
	cout<<fun()<<endl;
	
	return 0;
}

