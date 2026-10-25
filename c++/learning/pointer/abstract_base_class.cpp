#include<iostream>
using namespace std;

// Abstract base class
class CWH {
protected:
    string title;
    float rating;
public:
    CWH(string s, float r) {
        title = s;
        rating = r;
    }

    // Pure virtual function (makes this class abstract)
    virtual void display() = 0;
};
class CWHVideo : public CWH {
    float videoLength;
public:
    CWHVideo(string s, float r, float vl) : CWH(s, r) {
        videoLength = vl;
    }

    void display() override {
        cout << "This is an amazing video with title \"" << title << "\"\n";
        cout << "Ratings: " << rating << " out of 5 stars\n";
        cout << "Length of this video: " << videoLength << " minutes\n\n";
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
        cout << "No of words in this text tutorial: " << words << " words\n\n";
    }
};
int main() {
    string title;
    float rating, vlen;
    int words;

    // Video tutorial
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // Text tutorial
    title = "Django Tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    // Base class pointers
    CWH* tutorials[2];
    tutorials[0] = &djVideo;
    tutorials[1] = &djText;

    // Runtime polymorphism in action
    tutorials[0]->display(); // calls CWHVideo::display()
    tutorials[1]->display(); // calls CWHText::display()

    return 0;
}
