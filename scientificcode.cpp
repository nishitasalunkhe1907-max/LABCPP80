#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double a, b, result;
    int n;

    do
    {
        cout << "\n====================================\n";
        cout << "        SCIENTIFIC CALCULATOR\n";
        cout << "====================================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power\n";
        cout << "6. Square Root\n";
        cout << "7. Sine\n";
        cout << "8. Cosine\n";
        cout << "9. Tangent\n";
        cout << "10. Logarithm\n";
        cout << "11. Natural Logarithm\n";
        cout << "12. Factorial\n";
        cout << "13. Exit\n";
        cout << "====================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;

                result = a + b;

                cout << "Result = " << result << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;

                result = a - b;

                cout << "Result = " << result << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;

                result = a * b;

                cout << "Result = " << result << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;

                if (b == 0)
                    cout << "Error! Cannot divide by zero.\n";
                else
                {
                    result = a / b;
                    cout << "Result = " << result << endl;
                }

                break;

            case 5:
                cout << "Enter base: ";
                cin >> a;

                cout << "Enter exponent: ";
                cin >> b;

                result = pow(a, b);

                cout << "Result = " << result << endl;
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> a;

                if (a < 0)
                    cout << "Error! Square root of negative number.\n";
                else
                {
                    result = sqrt(a);
                    cout << "Square Root = " << result << endl;
                }

                break;

            case 7:
                cout << "Enter angle in degrees: ";
                cin >> a;

                result = sin(a * M_PI / 180);

                cout << "sin(" << a << ") = " << result << endl;
                break;

            case 8:
                cout << "Enter angle in degrees: ";
                cin >> a;

                result = cos(a * M_PI / 180);

                cout << "cos(" << a << ") = " << result << endl;
                break;

            case 9:
                cout << "Enter angle in degrees: ";
                cin >> a;

                result = tan(a * M_PI / 180);

                cout << "tan(" << a << ") = " << result << endl;
                break;

            case 10:
                cout << "Enter a number: ";
                cin >> a;

                if (a <= 0)
                    cout << "Error! Logarithm requires a positive number.\n";
                else
                {
                    result = log10(a);
                    cout << "log(" << a << ") = " << result << endl;
                }

                break;

            case 11:
                cout << "Enter a number: ";
                cin >> a;

                if (a <= 0)
                    cout << "Error! Natural logarithm requires a positive number.\n";
                else
                {
                    result = log(a);
                    cout << "ln(" << a << ") = " << result << endl;
                }

                break;

            case 12:
                cout << "Enter a positive integer: ";
                cin >> n;

                if (n < 0)
                {
                    cout << "Factorial is not defined for negative numbers.\n";
                }
                else
                {
                    long long factorial = 1;

                    for (int i = 1; i <= n; i++)
                    {
                        factorial *= i;
                    }

                    cout << n << "! = " << factorial << endl;
                }

                break;

            case 13:
                cout << "\nThank you for using Scientific Calculator!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 13);

    return 0;
}
