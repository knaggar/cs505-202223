#include "Employee.h"

Employee::Employee()
{
    id = 0;
    name = "Anonymous Employee";
    address = "Egypt";
    age = 22;
    salary = 12000;
}

Employee::Employee(string n, string addr, int a, float s, int i)
{
    name = n;
    address = addr;
    age = a;
    salary = s;
    id = i;
}

Employee::~Employee()
{
}

int Employee::getId()
{
    return id;
}

int Employee::getAge()
{
    return age;
}

float Employee::getSalary()
{
    return salary;
}

string Employee::getName()
{
    return name;
}

string Employee::getAddress()
{
    return address;
}

float Employee::getNetSalary()
{
    return net_salary;
}

void Employee::setId(int i)
{
    id = i;
}

void Employee::setAge(int a)
{
    age = a;
}

void Employee::setSalary(float s)
{
    salary = s;
}

void Employee::calcNetSalary(float s, float t)
{
    net_salary = s - t;
}

void Employee::setName(string n)
{
    name = n;
}

void Employee::setAddress(string addr)
{
    address = addr;
}