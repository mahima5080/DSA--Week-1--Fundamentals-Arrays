#include <iostream>
using namespace std;

int bubbleSortWithSwapCount(int arr[], int size) {
    int totalSwaps = 0;
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                totalSwaps++;
                swapped = true;
            }
        }
        if (!swapped) break; // Optimization
    }
    return totalSwaps;
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

    int swaps = bubbleSortWithSwapCount(arr, size);

    cout << "Sorted Array  : ";
    printArray(arr, size);
    cout << "🔄 Total Swaps Performed: " << swaps << endl;

    return 0;
}
