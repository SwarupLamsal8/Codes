#include <iostream>
using namespace std;

class demo
{
    int a;

public:
    demo(int i)
    {
        a = i;
    }
    void showdata()
    {
        cout << "The number is: " << a;
    }
};

int main()
{
    int a = 10;
    demo bb = a;
    bb.showdata();
    return 0;
}