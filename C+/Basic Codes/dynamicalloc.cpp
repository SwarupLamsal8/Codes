#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 5;
    cout << "The number is: " << *ptr;
    delete ptr;
}