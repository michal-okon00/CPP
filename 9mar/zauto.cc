#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
	int x = 5;
	float y = 10.4;
	double z = 14.1;
	auto a = 51.01;
	
	cout<<"int: "<<sizeof(x)<<x<<endl;
	cout<<"float: "<<sizeof(y)<<y<<endl;
	cout<<"double: "<<sizeof(z)<<z<<endl;
	cout<<"auto: "<<sizeof(a)<<a<<endl;
}
