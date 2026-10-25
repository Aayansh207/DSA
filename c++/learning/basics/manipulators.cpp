#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //Manipulators
    //setw manipulator
    int a=1,b=10,c=100;
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;

    //ws manipualtor
    string d;
    cin>>ws>>d;
    cout<<d<<endl;

    //setfill manipulator
    string e="abcd";
    cout<<setfill('*')<<setw(10)<<e;
    return 0;
}