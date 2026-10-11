// Q17. Write a program to remove all vowels
// from a string using string functions.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int j = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Remove all vowels from the string
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];

        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u' && ch != 'A' &&
            ch != 'E' && ch != 'I' && ch != 'O' &&
            ch != 'U') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';

    cout << "String after removing vowels: " << str;

    return 0;
}

// Output:
// Enter a string: Hello World
// String after removing vowels: Hll Wrld
