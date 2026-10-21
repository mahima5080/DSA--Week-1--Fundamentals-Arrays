#include <iostream>
using namespace std;

void reverseArrayInPlace(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap start and end elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "\nOriginal Array: ";
    printArray(arr, size);

    reverseArrayInPlace(arr, size);

    cout << "Reversed Array: ";
    printArray(arr, size);

    return 0;
}
