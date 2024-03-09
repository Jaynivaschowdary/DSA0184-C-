#include <iostream>
using namespace std;
class MyArray {
private:
    int* data;
    int size;

public:
    MyArray(int s) : size(s) {
        data = new int[size];
    }

    ~MyArray() {
        delete[] data;
    }
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return data[index];
    }
};
int main() {
    const int SIZE = 5;
    MyArray arr(SIZE);
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = i * 2;
    }
    cout << "Elements of array:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    try {
        cout << "Trying to access an element out of range: ";
        cout << arr[SIZE] << endl; 
    } catch (const out_of_range& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
