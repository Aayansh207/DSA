#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fh("D:\\Projects_Main\\c++\\learning\\file_handling\\file1.txt");
    // ------or-----
    // ifstream fh;
    // fh.open(Path);
    string st2;
    while (getline(fh,st2)){
        cout<<st2<<endl;
    };
    // while (in.eof()==0) 
    // {
    //     // using getline to fill the whole line in st
    //     getline(in,st);
    //     cout<<st<<endl;
    // }
    fh.close();
    return 0;
}