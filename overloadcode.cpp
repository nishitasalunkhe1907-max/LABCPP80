#include <iostream>
using namespace std;

class Add
{
public:
    void sum(int a, int b)
    {
        cout << "Sum = " << a + b << endl;
    }

    void sum(float a, float b)
    {
        cout << "Sum = " << a + b << endl;
    }
};

int main()
{
    Add obj;
    obj.sum(10, 20);
    obj.sum(5.5f, 2.5f);

    return 0;
}