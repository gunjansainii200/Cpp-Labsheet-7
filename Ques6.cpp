// Q6. Write a program to join first name and
// last name using strcat().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char firstName[100];
    char lastName[50];

    cout << "Enter first name: ";
    cin.getline(firstName, 100);

    cout << "Enter last name: ";
    cin.getline(lastName, 50);

    // Join first name and last name
    strcat(firstName, " ");
    strcat(firstName, lastName);

    cout << "Full name: " << firstName;

    return 0;
}

// Output:
// Enter first name: Gunjan
// Enter last name: Saini
// Full name: Gunjan Saini
