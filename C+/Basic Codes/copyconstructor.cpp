#include <iostream>
#include <string>
using namespace std;

class demo
{
    int a;
    float b;
    string n;

public:
    demo(int aa, float bb, string cc)
    {
        a = aa;
        b = bb;
        n = cc;
    }
    demo(demo &na)
    {
        a = na.a;
        b = na.b;
        n = na.n;
    }
    void printdata()
    {
        cout << "Number is: " << a << ",Float is: " << b << ",String is: " << n << endl;
    }
};

int main()
{
    demo n1(4, 4.44, "swarup");
    demo n2(n1);
    n2.printdata();
    return 0;
}