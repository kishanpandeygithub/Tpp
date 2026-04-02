#include <iostream>

using namespace std;

class Employee
{
private:
    string first_name;
    string Last_name;
    string email;
    int salary;

public:
    Employee(string first_name, string Last_name, string email, int salary)
    {
        this->first_name = first_name;
        this->Last_name = Last_name;
        this->email = Last_name;
        this->salary = salary;
    }

    void DisplayDetail()
    {
        cout << this->first_name;
        cout << this->Last_name;
        cout << this->email;
        cout << this->salary;
    }
};
int main()
{
    Employee *E1 = new Employee("kishan", "pandey", "kishan@gmail.com", 23);
    E1->DisplayDetail();
    return 0;
}