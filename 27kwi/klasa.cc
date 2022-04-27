#include <iostream>
using namespace std;

class test{
    public:
        int x;

	void fun1(){
	    cout<<"x: "<<x<<endl;
	}
	void fun2();
};

void test::fun2(){
    cout<<"fun2()"<<endl;
}

int main(){
    test Volvo;
    Volvo.x = 5;
    Volvo.fun1();
    Volvo.fun2();

    test *Ford = new test();
    Ford->x=7;
    Ford->fun1();
}
