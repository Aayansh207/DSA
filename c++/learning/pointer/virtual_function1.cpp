#include<iostream>
using namespace std;

class CWH {
protected:
    string title;
    float rating;
public:
    CWH(string s, float r) {
        title = s;
        rating = r;
    }
    virtual void display() { // virtual function
        cout << "Base class display called\n";
    }
};

class CWHVideo : public CWH {
    float videoLength;
public:
    CWHVideo(string s, float r, float vl) : CWH(s, r) {
        videoLength = vl;
    }
    void display() override { // overrides base class
        cout << "This is an amazing video with title \"" << title << "\"\n";
        cout << "Ratings: " << rating << " out of 5 stars\n";
        cout << "Length of this video: " << videoLength << " minutes\n";
    }
};
class CWHText : public CWH {
    int words;
public:
    CWHText(string s, float r, int wc) : CWH(s, r) {
        words = wc;
    }
    void display() override {
        cout << "This is an amazing text tutorial with title \"" << title << "\"\n";
        cout << "Ratings: " << rating << " out of 5 stars\n";
        cout << "No of words in this text tutorial: " << words << "\n";
    }
};
int main() {
    string title;
    float rating, vlen;
    int words;

    // Creating Video object
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // Creating Text object
    title = "Django Tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    // Base class pointer array
    CWH* tutorials[2];
    tutorials[0] = &djVideo; // base class pointer to video object
    tutorials[1] = &djText;  // base class pointer to text object

    // Polymorphism in action
    tutorials[0]->display(); // calls CWHVideo::display()
    tutorials[1]->display(); // calls CWHText::display()

    return 0;
}
