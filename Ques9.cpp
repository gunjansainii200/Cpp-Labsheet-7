// Q9. Write a program to arrange an array of strings
// in alphabetical order using strcmp().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[5][50];
    char temp[50];

    cout << "Enter 5 strings:" << endl;

    for (int i = 0; i < 5; i++) {
        cin.getline(str[i], 50);
    }

    // Sort strings in alphabetical order
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    cout << "Strings in alphabetical order:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << str[i] << endl;
    }

    return 0;
}

// Output:
// Enter 5 strings:
// Mango
// Apple
// Banana
// Orange
// Grapes
// Strings in alphabetical order:
// Apple
// Banana
// Grapes
// Mango
// Orange
