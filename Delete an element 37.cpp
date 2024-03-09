#include <iostream>
using namespace std;
int main() {
    int size, pos;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
}
    cout << "Enter the position of the element you want to delete: ";
    cin >> pos;
    if (pos < 1 || pos > size) {
        cout << "Invalid position!" << endl;
        return 0;
    }
    for (int i = pos - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Updated array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}