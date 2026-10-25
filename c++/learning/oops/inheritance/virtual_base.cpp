#include <iostream>
using namespace std;

// Virtual Base Class
class Student {
protected:
    int roll_no;
public:
    void set_number(int a) {
        roll_no = a;
    }
    void print_number() {
        cout << "Your roll number is " << roll_no << endl;
    }
};

// Test and Sports both inherit Student virtually
class Test : virtual public Student {
protected:
    float maths, physics;
public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }
    void print_marks() {
        cout << "Your marks are:\n";
        cout << "Maths: " << maths << endl;
        cout << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student {
protected:
    float score;
public:
    void set_score(float sc) {
        score = sc;
    }
    void print_score() {
        cout << "Your PT score is " << score << endl;
    }
};

// Result inherits both Test and Sports
class Result : public Test, public Sports {
    float total;
public:
    void display() {
        total = maths + physics + score;
        print_number();     // From Student
        print_marks();      // From Test
        print_score();      // From Sports
        cout << "Total score: " << total << endl;
    }
};

// Main function
int main() {
    Result harry;
    harry.set_number(4200);         // From Student
    harry.set_marks(78.9, 99.5);    // From Test
    harry.set_score(9);             // From Sports
    harry.display();                // From Result
    return 0;
}
