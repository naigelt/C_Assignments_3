#include <iostream>
#include <algorithm> // For std::swap

void print_array(const int* t, int n, int swapped_idx = -1, int swapped_pair_idx = -1) {
    std::cout << "[";
    for (int i = 0; i < n; ++i) {
        if (i == swapped_idx || i == swapped_pair_idx) {
            std::cout << "*" << t[i] << "*"; // Mark swapped elements with asterisks
        }
        else {
            std::cout << t[i];
        }

        if (i < n - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]";
}

void reverse_and_print_steps(int* t, int n) {
    std::cout << "Initial: ";
    print_array(t, n);
    std::cout << std::endl;

    for (int i = 0; i < n / 2; ++i) {
        // Print array before swap
        std::cout << "Before swap " << i + 1 << ": ";
        print_array(t, n);
        std::cout << std::endl;

        // Perform swap
        std::swap(t[i], t[n - 1 - i]);

        // Print array after swap, with swapped elements marked
        std::cout << "After swap " << i + 1 << ": ";
        print_array(t, n, i, n - 1 - i);
        std::cout << std::endl << std::endl;
    }
}

int main() {
    const int size = 6;
    int myArray[size] = { 1, 2, 3, 4, 5, 6 };

    reverse_and_print_steps(myArray, size);

    return 0;
}
