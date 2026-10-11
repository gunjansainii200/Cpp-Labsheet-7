// Q19. Write a program to join multiple strings
// into one sentence using strcat().

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[200] = "";
    char str2[50];
    char str3[50];
    char str4[50];

    cout << "Enter first string: ";
    cin.getline(str2, 50);

    cout << "Enter second string: ";
    cin.getline(str3, 50);

    cout << "Enter third string: ";
    cin.getline(str4, 50);

    // Join multiple strings into one sentence
    strcat(str1, str2);
    strcat(str1, " ");
    strcat(str1, str3);
    strcat(str1, " ");
    strcat(str1, str4);

    cout << "Combined sentence: " << str1;

    return 0;
}

// Output:
// Enter first string: I
// Enter second string: love
// Enter third string: C++
// Combined sentence: I love C++
