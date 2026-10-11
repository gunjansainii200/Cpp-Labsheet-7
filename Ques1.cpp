
 // Q1. Write a program to input a string and
 // find its length using strlen().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Length of string = " << strlen(str);

    return 0;
}

// Output:
// Enter a string: Hello World
// Length of string = 11
