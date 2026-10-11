// Q11. Write a program to check if a string is
// palindrome using strrev().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    char original[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Copy original string
    strcpy(original, str);

    // Reverse the string
    strrev(str);

    // Check palindrome
    if (strcmp(original, str) == 0) {
        cout << "String is a palindrome.";
    } else {
        cout << "String is not a palindrome.";
    }

    return 0;
}

// Output:
// Enter a string: madam
// String is a palindrome.
