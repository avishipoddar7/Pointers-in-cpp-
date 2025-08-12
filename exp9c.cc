//exp9c 
//traversing array in reverse using pointer 

#include <iostream>
using namespace std;

int main() {
    int n;
cout << "Enter number of elements: ";
cin >> n;

int arr[n]; // create array of given size

cout << "Enter " << n << " elements: ";
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}

    //intialised to start from last 
    int *ptr = &arr[n - 1];

    cout << "Array traversed in reverse using a pointer: ";

    for (int i = 0; i < n; i++) {
        
        cout << *ptr << " ";
        ptr--; //moves to previous 
    }

    cout << endl;

    return 0;
}

/*
 Output 

Enter number of elements: 6
Enter 6 elements: 3 4 5 6 7 8 
Array traversed in reverse using a pointer: 8 7 6 5 4 3  

*/