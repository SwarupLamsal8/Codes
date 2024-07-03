#include <iostream>
using namespace std;

class demo
{
    int a;

public:
    void getdata()
    {
        cout << "Enter a number: ";
        cin >> a;
    }
    void showdata()
    {
        cout << "The value is: " << a << endl;
    }
    demo operator++()
    {
        a = a + 1;
    }
};

int main()
{
    demo d;
    d.getdata();
    cout << "Before Increment:\t";
    d.showdata();
    ++d;
    cout << "After Increment:\t";
    d.showdata();
    return 0;
}