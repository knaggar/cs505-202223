#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
private:
    string name;
    string address;
    int age;
    float salary, taxes, net_salary;
    int id;
public:
    Employee();
    Employee(string, string, int, float, int);
    ~Employee();

    int getId();
    float getSalary();
    float getNetSalary();
    string getName();
    string getAddress();
    int getAge();

    void setId(int);
    void setAge(int);
    void setSalary(float);
    void calcNetSalary(float, float);
    void setName(string);
    void setAddress(string);
};

#endif