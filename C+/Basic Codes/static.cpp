#include <iostream>
using namespace std;

class demo
{
    static int count;
    string name;

public:
    void setdata()
    {
        cin >> name;
        count++;
    }
    void getdata()
    {
        cout << "Name= " << name << endl;
    }
    void counter()
    {
        cout << "\nThe total number of employees is: " << count;
    }
};

int demo ::count;

int main()
{
    demo a, b, c, d;
    a.setdata();
    a.getdata();
    b.setdata();
    b.getdata();
    c.setdata();
    c.getdata();
    d.setdata();
    d.getdata();
    a.counter();
}