#include <iostream>

int main() {
    // Get the number of rows and columns from the user
    int rows, cols;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Allocate memory for the 2D array
    char** batchmates = new char*[rows];
    for (int i = 0; i < rows; ++i) {
        batchmates[i] = new char[cols];
    }

    // Get names of batchmates and store them in the array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter the name for batchmate [" << i << "][" << j << "]: ";
            std::cin >> batchmates[i][j];
        }
    }

    // Display the entered names
    std::cout << "\nEntered names of batchmates:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << batchmates[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] batchmates[i];
    }
    delete[] batchmates;

    return 0;
}
