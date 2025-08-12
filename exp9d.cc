//exp9d
//Print a string using pointer 

#include <iostream>
using namespace std;

int main() {
    char userInput[256];
    cout << "Enter any string: ";
    cin.getline(userInput, 256);
    cout << "You entered: ";
    char* ptr = userInput;
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;
    return 0;
}

/*
Output 

Enter any string: christopher nolan makes amazing movies 
You entered: christopher nolan makes amazing movies 

*/