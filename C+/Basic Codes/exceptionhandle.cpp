#include <iostream>
using namespace std;

int function1(int a, int b)
{
    if (b == 0)
    {
        throw b;
    }
    else
    {
        cout << "The result is: " << a / b << endl;
    }
}

int main()
{
    int aa, bb;
    int c;
    cout << "Enter two numbers: " << endl;
    cin >> aa >> bb;
    try
    {
        c = function1(aa, bb);
    }
    catch (int b)
    {
        cout << "Exception due to: " << b << endl;
    }
    return 0;
}