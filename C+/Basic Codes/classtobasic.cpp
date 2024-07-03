#include <iostream>
using namespace std;

class convert
{
    int a;

public:
    void getdata()
    {
        cout << "Enter the number:" << endl;
        cin >> a;
    }
    void showdata()
    {
        cout << "The number in class is: " << a << endl;
    }
    operator int()
    {
        return a;
    }
};

int main()
{
    int a;
    convert b;
    b.getdata();
    b.showdata();
    a = b;
    cout << "After converting class to basic data type the number is: " << a << endl;
    return 0;
}