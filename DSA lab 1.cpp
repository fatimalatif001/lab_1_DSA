#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr1[5] = { 64, 25, 12, 22, 11 };

    cout << "Original integer array: ";
    printArray(arr1, 5);

    selectionSort(arr1, 5);

    cout << "Sorted integer array: ";
    printArray(arr1, 5);

    return 0;
}
