#include <iostream>
using namespace std;

class A
{
    float a, b, c;

public:
    void inputd()
    {
        cin >> a >> b >> c;
    }
    friend float average(A obj);
};

float average(A obj)
{
    return (obj.a + obj.b + obj.c) / 3;
}

int main()
{
    A a;
    a.inputd();
    float ave = average(a);
    cout << "The average of the subjects is: " << ave;
    return 0;
}