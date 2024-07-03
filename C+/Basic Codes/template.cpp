#include <iostream>
using namespace std;
template <typename T>
class divide
{
    T a, b;

public:
    divide(T g, T h)
    {
        a = g;
        b = h;
    }
    T print()
    {
        return a / b;
    }
};

int main()
{
    int aa = 14;
    int bb = 15;
    divide<int> d(aa, bb);
    cout << "The division of 16 by 8 is: " << d.print();
    return 0;
}