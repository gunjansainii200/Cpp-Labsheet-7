// Q12. Write a program to find the first occurrence
// of a character in a string using strchr().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    char ch;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter a character to search: ";
    cin >> ch;

    // Find the first occurrence of the character
    char *result = strchr(str, ch);

    if (result != NULL) {
        cout << "Character found at position: "
             << (result - str + 1);
    } else {
        cout << "Character not found.";
    }

    return 0;
}

// Output:
// Enter a string: banana
// Enter a character to search: a
// Character found at position: 2
