#include <iostream>
#include <string>
using namespace std;

class COLLEGE
{
protected:
    string NAME;
    string ADDRESS;
    string MAIL_ID;

public:
    void GETDATA()
    {
        cout << "Enter College Name: ";
        cin >> NAME;
        cout << "Enter College Address: ";
        cin >> ADDRESS;
        cout << "Enter College Mail-ID: ";
        cin >> MAIL_ID;
    }

    void PUTDATA()
    {
        cout << "College Name: " << NAME << endl;
        cout << "College Address: " << ADDRESS << endl;
        cout << "College Mail-ID: " << MAIL_ID << endl;
    }
};

class FACULTY : public COLLEGE
{
protected:
    int ENGINEERING;
    int MANAGEMENT;
    int HUMANITIES;

public:
    void GETDATA()
    {
        COLLEGE::GETDATA();
        cout << "Enter Number of Engineering Faculty: ";
        cin >> ENGINEERING;
        cout << "Enter Number of Management Faculty: ";
        cin >> MANAGEMENT;
        cout << "Enter Number of Humanities Faculty: ";
        cin >> HUMANITIES;
    }

    void PUTDATA()
    {
        COLLEGE::PUTDATA();
        cout << "Number of Engineering Faculty: " << ENGINEERING << endl;
        cout << "Number of Management Faculty: " << MANAGEMENT << endl;
        cout << "Number of Humanities Faculty: " << HUMANITIES << endl;
    }
};

class DEPARTMENTS : public COLLEGE
{
protected:
    int BBA;
    int BCA;
    int BCE;

public:
    void GETDATA()
    {
        COLLEGE::GETDATA();
        cout << "Enter Number of BBA Departments: ";
        cin >> BBA;
        cout << "Enter Number of BCA Departments: ";
        cin >> BCA;
        cout << "Enter Number of BCE Departments: ";
        cin >> BCE;
    }

    void PUTDATA()
    {
        COLLEGE::PUTDATA();
        cout << "Number of BBA Departments: " << BBA << endl;
        cout << "Number of BCA Departments: " << BCA << endl;
        cout << "Number of BCE Departments: " << BCE << endl;
    }
};

int main()
{
    FACULTY f;
    cout << "Enter Faculty Details:" << endl;
    f.GETDATA();
    cout << "\nFaculty Details:" << endl;
    f.PUTDATA();

    cout << endl;

    DEPARTMENTS d;
    cout << "Enter Department Details:" << endl;
    d.GETDATA();
    cout << "\nDepartment Details:" << endl;
    d.PUTDATA();

    return 0;
}