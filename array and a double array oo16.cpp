#include <iostream>
#include <algorithm>
using namespace std;
void sortArray(int arr[], int size) {
    sort(arr, arr + size);
}
void sortArray(double arr[], int size) {
    sort(arr, arr + size);
}
void printIntArray(const int arr[], int size) {
    cout << "Sorted integer array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printDoubleArray(const double arr[], int size) {
    cout << "Sorted double array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {5, 3, 1, 4, 2};
    int intArraySize = sizeof(intArray) / sizeof(int);
    sortArray(intArray, intArraySize);
    printIntArray(intArray, intArraySize);
    double doubleArray[] = {5.5, 3.3, 1.1, 4.4, 2.2};
    int doubleArraySize = sizeof(doubleArray) / sizeof(double);
    sortArray(doubleArray, doubleArraySize);
    printDoubleArray(doubleArray, doubleArraySize);

    return 0;
}
