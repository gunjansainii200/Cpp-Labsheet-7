// Q3. Write a program to copy one string to
// another using strcpy().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100];
    char str2[100];

    cout << "Enter a string: ";
    cin.getline(str1, 100);

    // Copy one string to another
    strcpy(str2, str1);

    cout << "Copied string is: " << str2;

    return 0;
}

// Output:
// Enter a string: Hello World
// Copied string is: Hello World
