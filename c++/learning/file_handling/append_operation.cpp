#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fh("D:\\Projects_Main\\c++\\learning\\file_handling\\file1.txt",ios::app);
    fh<<"\nAayansh is the best boy in the world";
    return 0;
}