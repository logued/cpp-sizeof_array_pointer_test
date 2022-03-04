#include <iostream>
using namespace std;
// Demonstrates:
// Use of sizeof() to calculate the number of elements in an array.
// In main(), sizeof(array) will return 20 bytes, because there are 5 elements
// each 4 bytes long (int length).  The length can be obtained because the runtime
// system know that "array" is an array of integers,
// and the length of the array is available to it.

// Using sizeof(arr), in the function display() is different.
// In this case, the parameter "arr" is really of type pointer to int (int*),
// so the size of a pointer to an int is returned - 8 bytes.
// There is no information available from the pointer about
// the length of the array.  Therefore, we must pass in the length
// of the array.  Although "array" and "arr" look the same, they are
// actually different.


void display(int arr[], int length) {
    cout << "In display(), sizeof(arr) = " << sizeof(arr) << " bytes." << endl;
    for(int i=0; i<length; i++) {
        cout << i << ", ";
    }
}

int main() {
    std::cout << "Using sizeof() operator with arrays and pointers" << std::endl;

    int array[] = {1,2,3,4,5};

    int size = sizeof(array)/sizeof(int);       // total size of array in bytes / size of one element type = num elements

    cout << "In main(), sizeof(array) = " << sizeof(array) << " bytes." << endl;

    display(array,size);

    return 0;
}
