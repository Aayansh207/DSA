#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse, find, count
using namespace std;

int main() {
    // 1. Creating and Initializing
    vector<int> v = {10, 20, 30};
    cout << "Initial Vector: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 2. push_back and pop_back
    v.push_back(40);
    v.push_back(50);
    v.pop_back(); // removes 50
    cout << "After push_back and pop_back: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 3. insert at position
    v.insert(v.begin() + 1, 15); // insert 15 at index 1
    cout << "After insert at index 1: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 4. erase element and erase range
    v.erase(v.begin() + 2); // remove element at index 2
    cout << "After erase at index 2: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    v.erase(v.begin(), v.begin() + 2); // erase first 2 elements
    cout << "After erasing first 2 elements: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 5. assign and clear
    v.assign(5, 100); // vector of five 100s
    cout << "After assign(5, 100): ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 6. size, capacity, front, back, at
    cout << "Size: " << v.size() << ", Front: " << v.front() << ", Back: " << v.back() << ", At(2): " << v.at(2) << "\n";

    // 7. resize and reserve
    v.resize(3); // reduce size to 3
    v.reserve(10); // preallocate space
    cout << "After resize and reserve, Size: " << v.size() << ", Capacity: " << v.capacity() << "\n";

    // 8. reverse and sort
    v.push_back(90);
    v.push_back(10);
    reverse(v.begin(), v.end());
    cout << "After reverse: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    sort(v.begin(), v.end());
    cout << "After sort: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 9. count and find
    int cnt = count(v.begin(), v.end(), 100);
    cout << "Count of 100: " << cnt << "\n";

    auto it = find(v.begin(), v.end(), 90);
    if (it != v.end()) cout << "90 found at index: " << it - v.begin() << "\n";
    else cout << "90 not found\n";

    // 10. swap with another vector
    vector<int> another = {1, 2, 3};
    v.swap(another);
    cout << "After swapping with {1, 2, 3}, v becomes: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 11. empty and clear
    if (!v.empty()) cout << "Vector is not empty\n";
    v.clear();
    cout << "After clear(), size: " << v.size() << ", isEmpty: " << (v.empty() ? "Yes" : "No") << "\n";

    return 0;
}
