#include <iostream>
using namespace std;

// Function to calculate percentage
float calculatePercentage(int marks[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += marks[i];
    }

    return (float)sum / size;
}

int main()
{
    string name;
    int marks[5];

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    float percentage = calculatePercentage(marks, 5);

    cout << "\n----- Result -----\n";
    cout << "Student Name : " << name << endl;
    cout << "Percentage   : " << percentage << "%" << endl;

    if (percentage >= 75)
        cout << "Grade : A" << endl;
    else if (percentage >= 60)
        cout << "Grade : B" << endl;
    else if (percentage >= 40)
        cout << "Grade : C" << endl;
    else
        cout << "Grade : Fail" << endl;

    return 0;
}