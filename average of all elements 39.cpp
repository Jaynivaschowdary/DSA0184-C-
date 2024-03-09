#include <iostream>
double averageOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    double average = averageOfArray(arr, size);
    std::cout << "Average of all elements in the array: " << average << std::endl;

    return 0;
}
