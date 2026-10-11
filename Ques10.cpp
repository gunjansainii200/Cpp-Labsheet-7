// Q10. Write a program to reverse a string
// using strrev().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Reverse the string
    cout << "Reversed string: " << strrev(str);

    return 0;
}

// Output:
// Enter a string: Hello
// Reversed string: olleH
