#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return index where target is found
        }
    }
    return -1; // Target not found
}

int main() {
    int size, target;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter target element to search: ";
    cin >> target;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        cout << "✅ Element found at index " << result << endl;
    } else {
        cout << "❌ Element not found in array." << endl;
    }

    return 0;
}
