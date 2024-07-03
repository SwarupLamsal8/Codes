#include <iostream>
using namespace std;

class demo
{
    int x;

public:
    demo()
    {
        x = 0;
    }
    demo(int a)
    {
        x = a;
    }
    demo operator+(demo y)
    {
        demo temp;
        temp.x = x + y.x;
        return temp;
    }
    void display()
    {
        cout << "The sum of the objects is: " << x << endl;
    }
};

int main()
{
    demo a(5);
    demo b(6);
    demo c = a + b;
    c.display();
    return 0;
}