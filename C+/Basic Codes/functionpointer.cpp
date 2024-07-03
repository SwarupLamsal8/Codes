#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int (*funptr)(int, int);
    funptr = &multiply;
    int result = funptr(3, 4);
    cout << result;
    return 0;
}