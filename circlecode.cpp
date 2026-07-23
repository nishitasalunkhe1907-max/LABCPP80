#include <iostream>
using namespace std;

int main()
{
    float radius, area, circumference;
    const float PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "Area of the circle = " << area << endl;
    cout << "Circumference of the circle = " << circumference << endl;

    return 0;
}