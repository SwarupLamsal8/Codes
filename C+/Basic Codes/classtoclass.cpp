#include <iostream>
using namespace std;

class demo1
{
public:
    int a;
    void getdata()
    {
        cout << "Enter the number in Class 1: ";
        cin >> a;
    }
    void showdata()
    {
        cout << "The number in Class 1 is: " << a << endl;
    }
};

class demo2
{
public:
    int b;
    demo2(demo1 obj)
    {
        b = obj.a;
    }
    void showdata()
    {
        cout << "The number in Class 2 is: " << b;
    }
};

int main()
{
    demo1 d;
    d.getdata();
    d.showdata();
    // converting the object of class demo1 to demo2
    cout << "After converting the object of class demo1 to demo 2:" << endl;
    demo2 g = d;
    g.showdata();
    return 0;
}