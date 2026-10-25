#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30};

    l.push_back(40);
    l.push_front(5);

    cout << "After push_back & push_front: ";
    for (int x : l) cout << x << " ";
    cout << "\n";

    l.pop_back();
    l.pop_front();
    cout << "After pop_back & pop_front: ";
    for (int x : l) cout << x << " ";
    cout << "\n";

    auto it = l.begin();
    ++it;
    l.insert(it, 99); // insert 99 at 2nd position
    cout << "After insert at position 1: ";
    for (int x : l) cout << x << " ";
    cout << "\n";

    l.remove(20); // removes all 20s
    cout << "After remove(20): ";
    for (int x : l) cout << x << " ";
    cout << "\n";

    l.sort();
    l.reverse();
    cout << "After sort & reverse: ";
    for (int x : l) cout << x << " ";
    cout << "\n";

    l.push_back(99);
    l.push_back(99);
    l.unique();
    cout << "After unique (remove duplicates): ";
    for (int x : l) cout << x << " ";
    cout << "\n";

    list<int> l2 = {1, 2, 3};
    l.swap(l2);
    cout << "After swap with {1,2,3}: ";
    for (int x : l) cout << x << " ";
    cout << "\n";

    l.clear();
    cout << "After clear(), is empty: " << (l.empty() ? "Yes" : "No") << "\n";

    return 0;
}
