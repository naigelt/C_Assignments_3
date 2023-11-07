#include <iostream>
#include <algorithm> // For std::swap

int* array = nullptr;
int size = 0;

void allocate_array();
void read_values();
void reverse_array();
void print_array();
void deallocate_array();

int main() {
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    allocate_array();

    std::cout << "Enter " << size << " integers:" << std::endl;
    read_values();

    reverse_array();

    std::cout << "Reversed array:" << std::endl;
    print_array();

    deallocate_array();

    return 0;
}

void allocate_array() {
    array = new int[size];
}

void read_values() {
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
}

void reverse_array() {
    for (int i = 0; i < size / 2; ++i) {
        std::swap(array[i], array[size - i - 1]);
    }
}

void print_array() {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void deallocate_array() {
    delete[] array;
    array = nullptr; // Good practice to set the pointer to nullptr after deleting,
    //atleast that what I read from stack-over-flow.

}
