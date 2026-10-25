#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fh("D:\\Projects_Main\\c++\\learning\\file_handling\\file1.txt");
    fh << "Aayansh is the best boy in the world";
    fh.close();
    return 0;
}