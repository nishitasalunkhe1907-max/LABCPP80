#include <iostream>

int main() {
    
    double length, width;
    double area, perimeter;

    
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    
    std::cout << "\n--- Results ---" << std::endl;
    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;

    return 0;
}