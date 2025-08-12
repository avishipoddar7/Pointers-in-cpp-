//exp9b
//basic pointer arithmetic
//difference between two pointers 



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *ptr = arr; // or &arr[0]
    cout << "Difference Between Pointers \n";

    int *startPtr = &arr[0];       // first element
    int *endPtr = &arr[n - 1];     // last element

    cout << "The number of elements between endPtr and startPtr is: "
         << (endPtr - startPtr) << endl;

    return 0;
}

/*
  Output 
Enter number of elements: 4
Enter 4 elements: 10
20
30
40
Difference Between Pointers 
The number of elements between endPtr and startPtr is: 3 

*/