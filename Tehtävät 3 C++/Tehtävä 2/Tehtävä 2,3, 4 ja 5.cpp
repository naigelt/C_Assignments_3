#include <iostream>
#include <algorithm>

void swap(int* t, int n) {
    for (int i = 0; i < n / 2; i++) {
        std::swap(t[i], t[n - 1 - i]);
    }
}

void read_values(int* t, int n) {
    std::cout << "Enter " << n << " integers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> t[i];
    }
}

void print_values(const int* t, int n) {
    std::cout << "Printed index values from the list: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << t[i];
        if (i < n - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int* book_array(int n) {
    int* array = new int[n];
    return array;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* myArray = book_array(size);

    read_values(myArray, size);

    swap(myArray, size);

    print_values(myArray, size);

    std::cout << "Swapped values here for assignment 3: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << std::endl;
    }

    delete[] myArray;

    return 0;
}
