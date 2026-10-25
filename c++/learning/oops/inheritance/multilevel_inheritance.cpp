#include <iostream>
using namespace std;

// ----------- Level 1: Base Class -----------
class Student {
protected:
    int roll_number;

public:
    void set_roll_number(int r) {
        roll_number = r;
    }

    void get_roll_number() {
        cout << "The roll number is " << roll_number << endl;
    }
};

// ----------- Level 2: Derived from Student -----------
class Exam : public Student {
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }

    void get_marks() {
        cout << "Marks in Maths: " << maths << endl;
        cout << "Marks in Physics: " << physics << endl;
    }
};

// ----------- Level 3: Derived from Exam -----------
class Result : public Exam {
    float percentage;

public:
    void display_results() {
        get_roll_number();      // from Student
        get_marks();            // from Exam
        percentage = (maths + physics) / 2;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// ----------- Main Function -----------
int main() {
    Result harry;
    harry.set_roll_number(420);         // Inherited from Student
    harry.set_marks(94.0, 90.0);        // Inherited from Exam
    harry.display_results();            // Defined in Result
    return 0;
}
