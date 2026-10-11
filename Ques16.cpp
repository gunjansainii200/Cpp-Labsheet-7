// Q16. Write a program to count the number of words
// in a string using strlen() and spaces.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    int words = 0;

    cout << "Enter a string: ";
    cin.getline(str, 200);

    // Count words using spaces and strlen()
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            words++;
        }
    }

    cout << "Number of words = " << words;

    return 0;
}

// Output:
// Enter a string: I love C++ programming
// Number of words = 4
