#include <iostream>
using namespace std;

class Time
{
    int hr;
    int min;
    int sec;

public:
    void getdata()
    {
        cout << "Enter the time in hours, mins and secs respectively" << endl;
        cin >> hr >> min >> sec;
    }
    void arrangedata()
    {
        if (sec >= 60)
        {
            min++;
            sec = sec % 60;
        }
        if (min >= 60)
        {
            hr++;
            min = min % 60;
        }
        if (hr >= 24)
        {
            hr = hr % 24;
        }
    }
    Time operator+(Time x)
    {
        Time temp;
        temp.hr = hr + x.hr;
        temp.min = min + x.min;
        temp.sec = sec + x.sec;
        return temp;
    }
    void showdata()
    {
        cout << "The time in format HH:MM:SS is- " << hr << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    Time t1;
    t1.getdata();
    Time t2;
    t2.getdata();
    Time t3;
    t3 = t1 + t2;
    t3.arrangedata();
    t3.showdata();
}