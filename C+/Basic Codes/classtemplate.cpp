#include <iostream>
using namespace std;

template <typename T>

T sum(T a[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    int size;
    int a[5];
    size = 5;
    cout << "\nEnter the data in integer form:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << "th element: ";
        cin >> a[i];
    }
    int sum1 = sum(a, size);
    float b[6];
    size = 6;
    cout << "\nEnter the data in float form:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << "th element: ";
        cin >> b[i];
    }
    float sum2 = sum(b, size);
    cout << "The sum of integer array is: " << sum1 << endl;
    cout << "The sum of floating array is: " << sum2 << endl;
    return 0;
}