// Q14. Write a program to find a substring inside
// another string using strstr().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    char sub[50];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter substring to search: ";
    cin.getline(sub, 50);

    // Find substring inside the string
    char *result = strstr(str, sub);

    if (result != NULL) {
        cout << "Substring found.";
    } else {
        cout << "Substring not found.";
    }

    return 0;
}

// Output:
// Enter a string: Hello World
// Enter substring to search: World
// Substring found.
