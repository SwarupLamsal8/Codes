#include <iostream>
using namespace std;
template <class T>

T greatest(T a, T b, T c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    float a, b, c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    float d = greatest(a, b, c);
    cout << "The greatest number is: " << d << endl;
    return 0;
}