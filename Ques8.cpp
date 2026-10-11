// Q8. Write a program to check if two strings are
// equal (case-sensitive) using strcmp().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100];
    char str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // Compare strings (case-sensitive)
    if (strcmp(str1, str2) == 0) {
        cout << "Strings are equal.";
    } else {
        cout << "Strings are not equal.";
    }

    return 0;
}

// Output:
// Enter first string: Hello
// Enter second string: hello
// Strings are not equal.
