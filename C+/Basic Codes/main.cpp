#include <iostream>
using namespace std;

class animal
{
public:
    virtual void makesound()
    {
        cout << "Animal sound" << endl;
    }
};

class dog : public animal
{
public:
    void makesound()
    {
        cout << "Barks" << endl;
    }
};

class cat : public animal
{
public:
    void makesound()
    {
        cout << "Meows" << endl;
    }
};

int main()
{
    animal *a;
    dog d;
    cat c;
    a = &d;
    a->makesound();
    a = &c;
    a->makesound();
    return 0;
}