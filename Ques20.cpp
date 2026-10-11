// Q20. Write a program to check whether two strings
// are anagrams using string functions.

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char str1[100];
    char str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        cout << "Strings are not anagrams.";
        return 0;
    }

    // Sort both strings
    sort(str1, str1 + strlen(str1));
    sort(str2, str2 + strlen(str2));

    // Compare sorted strings
    if (strcmp(str1, str2) == 0) {
        cout << "Strings are anagrams.";
    } else {
        cout << "Strings are not anagrams.";
    }

    return 0;
}

// Output:
// Enter first string: listen
// Enter second string: silent
// Strings are anagrams.
