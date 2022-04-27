#include <iostream>
using namespace std;

void fa(int x,int xmax){
    int i,imax;
    i = x;
    imax = xmax;
    cout<<"i++ while\nPrzed: "<<i<<endl;
    while(i<imax){
        cout<<"W: "<<i++<<endl;
    }
    cout<<"Po: "<<i<<endl;
    cout<<endl;
    
    i = x;
    imax = xmax;
    cout<<"++i while\nPrzed: "<<i<<endl;
    while(i<imax){
        cout<<"W: "<<++i<<endl;
    }
    cout<<"Po: "<<i<<endl;
}

void fb(int x,int xmax){
    int i,imax;
    i = x;
    imax = xmax;
    cout<<"i++ do_while\nPrzed: "<<i<<endl;
    do{
        cout<<"W: "<<i++<<endl;
    }while(i<imax);
    cout<<"Po: "<<i<<endl;
    cout<<endl;
    
    i = x;
    imax = xmax;
    cout<<"++i do_while\nPrzed: "<<i<<endl;
    do{
        cout<<"W: "<<++i<<endl;
    }while(i<imax);
    cout<<"Po: "<<i<<endl;
}

void fc(int x,int xmax){
    int i,imax;
    i = x;
    imax = xmax;
    cout<<"i++ for\nPrzed: "<<i<<endl;
    for(i;i<imax;i++){
        cout<<"W: "<<i<<endl;
    }
    cout<<"Po: "<<i<<endl;
    cout<<endl;
    
    i = x;
    imax = xmax;
    cout<<"++i for\nPrzed: "<<i<<endl;
    for(i;i<imax;++i){
        cout<<"W: "<<i<<endl;
    }
    cout<<"Po: "<<i<<endl;
}




int main(){
    fa(0,10);
    fb(0,10);
    fc(0,10);
    return 0;
}