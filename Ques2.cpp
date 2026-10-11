
// Q2. Write a program to count the number of
// vowels in a string using strlen().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int vowels = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == 'A' ||
            ch == 'E' || ch == 'I' || ch == 'O' ||
            ch == 'U') {
            vowels++;
        }
    }

    cout << "Number of vowels = " << vowels;

    return 0;
}

// Output:
// Enter a string: Hello World
// Number of vowels = 3
