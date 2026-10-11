// Q15. Write a program to check if one string is
// present in another using strstr().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    char sub[50];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter substring to search: ";
    cin.getline(sub, 50);

    // Check if substring is present
    if (strstr(str, sub) != NULL) {
        cout << "Substring is present.";
    } else {
        cout << "Substring is not present.";
    }

    return 0;
}

// Output:
// Enter a string: I love C++ programming
// Enter substring to search: C++
// Substring is present.
