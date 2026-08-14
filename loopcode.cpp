#include <iostream>

int main() {
    int count = 1;

    // Loop runs as long as count is less than or equal to 5
    while (count <= 5) {
        std::cout << "Count is: " << count << std::endl;
        count++; // Increments count by 1 each time
    }

    std::cout << "Loop finished!" << std::endl;
    return 0;
}