#include <iostream>

int* book_array(int n) {
    int* array = new int[n];
    return array;
}

int main() {
    int size = 10;
    int* myArray = book_array(size);

    // The line under this was for testing
    std::cout << "Array contents" << std::endl;
    for (int i = 0; i < size; ++i) {
        myArray[i] = i * i;
        std::cout << "myArray[" << i << "]" << myArray[i] << std::endl;
    }
    
    delete[] myArray;
    

    return 0;
}
