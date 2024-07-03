#include <iostream>
using namespace std;

class Operation
{
    int x, y;

public:
    void set()
    {
        cout << "\n enter x and y : ";
        cin >> x >> y;
    }
    void display()
    {
        cout << "\n x = " << x << endl
             << " y = " << y << endl;
    }
    void operator*()
    {
        int result;
        result = x * y;
        cout << "\n result  = " << result << endl;
    }
};
int main()
{
    Operation m;
    m.set();
    m.display();
    m.operator*();
    return 0;
}