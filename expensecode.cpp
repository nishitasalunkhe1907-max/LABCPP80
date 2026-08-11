#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Expense
{
public:
    int id;
    string date;
    string category;
    string description;
    float amount;

    void input()
    {
        cout << "\nEnter Expense ID: ";
        cin >> id;

        cout << "Enter Date (DD/MM/YYYY): ";
        cin >> date;

        cin.ignore();

        cout << "Enter Category: ";
        getline(cin, category);

        cout << "Enter Description: ";
        getline(cin, description);

        cout << "Enter Amount: Rs. ";
        cin >> amount;
    }

    void display()
    {
        cout << "\nID          : " << id;
        cout << "\nDate        : " << date;
        cout << "\nCategory    : " << category;
        cout << "\nDescription : " << description;
        cout << "\nAmount      : Rs. " << fixed << setprecision(2) << amount;
        cout << "\n-----------------------------------";
    }
};

void addExpense()
{
    Expense e;

    ofstream file("expenses.txt", ios::app);

    if (!file)
    {
        cout << "\nError opening file!";
        return;
    }

    e.input();

    file << e.id << "|"
         << e.date << "|"
         << e.category << "|"
         << e.description << "|"
         << e.amount << endl;

    file.close();

    cout << "\nExpense added successfully!\n";
}

void displayExpenses()
{
    ifstream file("expenses.txt");

    if (!file)
    {
        cout << "\nNo expense records found!\n";
        return;
    }

    Expense e;
    string line;

    cout << "\n========== ALL EXPENSES ==========\n";

    while (getline(file, line))
    {
        size_t pos1 = line.find("|");
        size_t pos2 = line.find("|", pos1 + 1);
        size_t pos3 = line.find("|", pos2 + 1);
        size_t pos4 = line.find("|", pos3 + 1);

        if (pos1 == string::npos)
            continue;

        e.id = stoi(line.substr(0, pos1));

        e.date = line.substr(
            pos1 + 1,
            pos2 - pos1 - 1
        );

        e.category = line.substr(
            pos2 + 1,
            pos3 - pos2 - 1
        );

        e.description = line.substr(
            pos3 + 1,
            pos4 - pos3 - 1
        );

        e.amount = stof(line.substr(pos4 + 1));

        e.display();
    }

    file.close();
}

void calculateTotal()
{
    ifstream file("expenses.txt");

    if (!file)
    {
        cout << "\nNo expense records found!\n";
        return;
    }

    string line;
    float total = 0;

    while (getline(file, line))
    {
        size_t pos1 = line.find("|");
        size_t pos2 = line.find("|", pos1 + 1);
        size_t pos3 = line.find("|", pos2 + 1);
        size_t pos4 = line.find("|", pos3 + 1);

        if (pos4 == string::npos)
            continue;

        float amount = stof(line.substr(pos4 + 1));

        total += amount;
    }

    file.close();

    cout << "\n================================\n";
    cout << "Total Expenses: Rs. "
         << fixed << setprecision(2)
         << total << endl;
    cout << "================================\n";
}

void searchCategory()
{
    ifstream file("expenses.txt");

    if (!file)
    {
        cout << "\nNo expense records found!\n";
        return;
    }

    string search;
    string line;
    bool found = false;

    cin.ignore();

    cout << "\nEnter category to search: ";
    getline(cin, search);

    while (getline(file, line))
    {
        size_t pos1 = line.find("|");
        size_t pos2 = line.find("|", pos1 + 1);
        size_t pos3 = line.find("|", pos2 + 1);
        size_t pos4 = line.find("|", pos3 + 1);

        if (pos4 == string::npos)
            continue;

        string category = line.substr(
            pos2 + 1,
            pos3 - pos2 - 1
        );

        if (category == search)
        {
            Expense e;

            e.id = stoi(line.substr(0, pos1));

            e.date = line.substr(
                pos1 + 1,
                pos2 - pos1 - 1
            );

            e.category = category;

            e.description = line.substr(
                pos3 + 1,
                pos4 - pos3 - 1
            );

            e.amount = stof(line.substr(pos4 + 1));

            e.display();

            found = true;
        }
    }

    if (!found)
        cout << "\nNo expenses found in this category.\n";

    file.close();
}

int main()
{
    int choice;

    do
    {
        cout << "\n\n====================================";
        cout << "\n          EXPENSE TRACKER";
        cout << "\n====================================";
        cout << "\n1. Add Expense";
        cout << "\n2. Display All Expenses";
        cout << "\n3. Calculate Total Expenses";
        cout << "\n4. Search by Category";
        cout << "\n5. Exit";
        cout << "\n====================================";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addExpense();
            break;

        case 2:
            displayExpenses();
            break;

        case 3:
            calculateTotal();
            break;

        case 4:
            searchCategory();
            break;

        case 5:
            cout << "\nThank you for using Expense Tracker!\n";
            break;

        default:
            cout << "\nInvalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}