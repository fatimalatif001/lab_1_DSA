#include <iostream>
using namespace std;

int linearSearch(int arr[], int value, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return size;
}

int linearSearch(float arr[], float value, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return size;
}
void printSearchResult(int index, int key, int size) {
    if (index != size)
        cout << "Value " << key << " found at index " << index << "." << endl;
    else
        cout << "Value " << key << " not found in the array." << endl;
}
void printSearchResult(int index, float key, int size) {
    if (index != size)
        cout << "Value " << key << " found at index " << index << "." << endl;
    else
        cout << "Value " << key << " not found in the array." << endl;
}

int main() {

    int intArray[5] = { 64, 25, 12, 22, 11 };
    int intKey = 12;
    int intIndex = linearSearch(intArray, intKey, 5);
    printSearchResult(intIndex, intKey, 5);

    float floatArray[4] = { 3.14f, 2.71f, 1.62f, 0.57f };
    float floatKey = 1.62f;
    int floatIndex = linearSearch(floatArray, floatKey, 4);
    printSearchResult(floatIndex, floatKey, 4);

    return 0;
}