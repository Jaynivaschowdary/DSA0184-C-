#include <iostream>
#include <cstring>
using namespace std;
string concatenate(const string& str1, const string& str2) {
    return str1 + str2;
}
char* concatenate(const char* arr1, const char* arr2) {
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    int totalLength = len1 + len2;
    char* result = new char[totalLength + 1];
    strcpy(result, arr1);
    strcat(result, arr2);

    return result;
}

int main() {
    string str1 = "Hello, ";
    string str2 = "world!";
    cout << "Concatenated string: " << concatenate(str1, str2) << endl;
    const char arr1[] = "Good ";
    const char arr2[] = "morning!";
    char* result = concatenate(arr1, arr2);
    cout << "Concatenated character array: " << result << endl;
    delete[] result;

    return 0;
}
