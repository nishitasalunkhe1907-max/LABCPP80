#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Extract place values of first number
    int tenThousands1 = num1 / 10000;
    int thousands1    = (num1 / 1000) % 10;
    int hundreds1     = (num1 / 100) % 10;
    int tens1         = (num1 / 10) % 10;
    int ones1         = num1 % 10;

    // Extract place values of second number
    int tenThousands2 = num2 / 10000;
    int thousands2    = (num2 / 1000) % 10;
    int hundreds2     = (num2 / 100) % 10;
    int tens2         = (num2 / 10) % 10;
    int ones2         = num2 % 10;

    // Add each place
    int ones = ones1 + ones2;
    int carry = ones / 10;
    ones %= 10;

    int tens = tens1 + tens2 + carry;
    carry = tens / 10;
    tens %= 10;

    int hundreds = hundreds1 + hundreds2 + carry;
    carry = hundreds / 10;
    hundreds %= 10;

    int thousands = thousands1 + thousands2 + carry;
    carry = thousands / 10;
    thousands %= 10;

    int tenThousands = tenThousands1 + tenThousands2 + carry;
    carry = tenThousands / 10;
    tenThousands %= 10;

    // Final answer
    int result = tenThousands * 10000
               + thousands * 1000
               + hundreds * 100
               + tens * 10
               + ones;

    cout << "\nAddition:\n";
    cout << num1 << " + " << num2 << " = " << result << endl;

    return 0;
}
