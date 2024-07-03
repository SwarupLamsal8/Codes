#include <iostream>
using namespace std;

class demo
{
    int x;
    int y;

public:
    void getdata()
    {
        cout << "Enter the values of x and y in complex number:" << endl;
        cin >> x >> y;
    }
    void putdata()
    {
        cout << "The result of the complex number is " << x << "+" << y << "i" << endl;
    }
    demo operator+(demo b)
    {
        demo temp;
        temp.x = x + b.x;
        temp.y = y + b.y;
        return temp;
    }
};

int main()
{
    demo a;
    demo b;
    a.getdata();
    b.getdata();
    demo c;
    c = a + b;
    c.putdata();
    return 0;
}