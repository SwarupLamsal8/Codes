#include <iostream>
using namespace std;

class complex
{
    int x;
    int y;

public:
    void getdata()
    {
        cout << "Enter the values of x and y in complex number: " << endl;
        cin >> x >> y;
    }
    void showdata()
    {
        cout << "The complex number is " << x << "+" << y << "i" << endl;
    }
    void result()
    {
        cout << "The result of the sum of complex numbers: " << x << "+" << y << "i" << endl;
    }
    complex operator+(complex b)
    {
        complex cc;
        cc.x = x + b.x;
        cc.y = y + b.y;
        return cc;
    }
};

int main()
{
    complex a, b;
    a.getdata();
    a.showdata();
    b.getdata();
    b.showdata();
    complex c;
    c = a + b;
    c.result();
}