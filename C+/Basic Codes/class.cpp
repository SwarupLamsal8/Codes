#include <iostream>
using namespace std;

template <typename T>

void ass(T a)
{
    cout << "The value of a is " << a << endl;
}

int main()
{
    int a = 5;
    ass(a);
    float b = 5.5;
    ass(b);
    char c = 'd';
    ass('d');
    return 0;
}