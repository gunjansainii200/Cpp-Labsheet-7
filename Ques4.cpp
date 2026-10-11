// Q4. Write a program to input two strings and
// check if they are equal using strcpy() and comparison.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100];
    char str2[100];
    char str3[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // Copy first string into another string
    strcpy(str3, str1);

    // Compare the copied string with the second string
    if (strcmp(str3, str2) == 0) {
        cout << "Strings are equal.";
    } else {
        cout << "Strings are not equal.";
    }

    return 0;
}

// Output:
// Enter first string: Hello
// Enter second string: Hello
// Strings are equal.
