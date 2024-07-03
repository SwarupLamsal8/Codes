#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    double x, y;

public:
    Point(double xx, double yy)
    {
        x = xx;
        y = yy;
    }
    friend void distance(Point, Point);
};

void distance(Point a, Point b)
{
    double result = sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
    cout << "The result of the distance between points is: " << result;
}

int main()
{
    Point p1(15, 13);
    Point p2(20, 30);
    distance(p1, p2);
    return 0;
}