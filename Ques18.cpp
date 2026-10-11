// Q18. Write a program to copy only first 5 characters
// of one string to another using strncpy().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100];
    char str2[6];

    cout << "Enter a string: ";
    cin.getline(str1, 100);

    // Copy first 5 characters
    strncpy(str2, str1, 5);
    str2[5] = '\0';

    cout << "Copied string: " << str2;

    return 0;
}

// Output:
// Enter a string: Hello World
// Copied string: Hello
