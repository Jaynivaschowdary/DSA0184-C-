#include <iostream>
int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int *arr = new int[size];
    std::cout << "Enter " << size << " integer values:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    std::cout << "Values in the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;

    return 0;
}
