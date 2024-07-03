#include <iostream>
#include <string>
using namespace std;

class EmployeeDetails
{
protected:
    string name;
    int E_id;
    string address;

public:
    void inputd()
    {
        cout << "Enter the employee's name: " << endl;
        cin >> name;
        cout << "Enter the employee's id: " << endl;
        cin >> E_id;
        cout << "Enter the employee's address" << endl;
        cin >> address;
    }
    virtual void showdata() = 0;
};

class EmployeeSalary : public EmployeeDetails
{
    int sal;
    string post;

public:
    void salary()
    {
        EmployeeDetails::inputd();
        cout << "Enter the employee's salary: " << endl;
        cin >> sal;
        cout << "Enter the employee's post: " << endl;
        cin >> post;
    }
    void showdata()
    {
        cout << "The data entered is: " << endl;
        cout << "Name: " << name << endl;
        cout << "EmployeeID: " << E_id << endl;
        cout << "Address: " << address << endl;
        cout << "Salary: " << sal << endl;
        cout << "Post: " << post << endl;
    }
};

int main()
{
    EmployeeSalary b;
    b.salary();
    b.showdata();
}