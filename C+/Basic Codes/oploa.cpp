#include <iostream>
using namespace std;

class demo
{
    int a;

public:
    demo()
    {
        a = 5;
    }
    demo operator++()
    {
        a = a + 1;
    }
    void display()
    {
        cout << a << endl;
    }
};

int main()
{
    demo obj;
    cout << "Before increment: a = ";
    obj.display();
    ++obj;
    cout << "After increment: a = ";
    obj.display();
    return 0;
}