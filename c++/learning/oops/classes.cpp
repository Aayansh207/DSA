#include<iostream>
using namespace std;

class User{
    private:
        string pass;
    public:
        string Name;
        int age;
        string userID;
    void setpassword(string pass1);  
    void showpassword(){cout<<pass<<Name<<age<<userID;};
};

void User::setpassword(string pass1){pass=pass1;};
int main(){
User a;
    a.setpassword("Rudra@2020");
    a.Name="Aayansh";
    a.age=18;
    a.userID="aayansh207";
    a.showpassword();
    return 0;
}