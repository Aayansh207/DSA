#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> age;

    // Inserting
    age["Aayansh"] = 19;
    age["Aryan"] = 20;
    age["Bhavya"] = 18;

    // Updating
    age["Aayansh"] = 20;

    // Accessing
    cout << "Aayansh's age: " << age.at("Aayansh") << "\n";

    // Checking existence
    if (age.count("Aryan"))
        cout << "Aryan is present\n";

    // Erasing
    age.erase("Bhavya");

    // Iterating
    cout << "All entries:\n";
    for (auto it = age.begin(); it != age.end(); ++it)
    cout << it->first << ": " << it->second << "\n";


    // Size and clear
    cout << "Size before clear: " << age.size() << "\n";
    age.clear();
    cout << "Size after clear: " << age.size() << "\n";

    return 0;
}
