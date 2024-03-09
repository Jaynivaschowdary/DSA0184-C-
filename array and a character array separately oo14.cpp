#include <iostream>
using namespace std;
void printArray(const int arr[], int size) {
    cout << "Integer array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printArray(const double arr[], int size) {
    cout << "Double array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printArray(const char arr[], int size) {
    cout << "Character array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    printArray(intArray, 5);
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printArray(doubleArray, 5);
    char charArray[] = "Hello";
    printArray(charArray, 5); 
    return 0;
}
