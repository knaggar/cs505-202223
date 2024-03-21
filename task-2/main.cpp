/* Task 2
Author: Kareem Eid
ID: 202200420
*/

#include <iostream>
#include "Employee.h"

using namespace std;

void printInfo(Employee e);

int main() {
    Employee e1;
    Employee e2("Khan Ali", "Cairo, Egypt", 28, 55000, 2);
    e2.calcNetSalary(55000, 10000.5);

    printInfo(e1);
    printInfo(e2);

    cout << endl;
    return 0;
}

void printInfo(Employee e) {
    cout << "Employee ID: " << e.getId() << endl;
    cout << "- Name: " << e.getName() << endl;
    cout << "- Address: " << e.getAddress() << endl;
    cout << "- Age: " << e.getAge() << endl;
    cout << "- Salary: " << e.getSalary() << endl;
    cout << "- Net salary: " << e.getNetSalary() << endl;
    cout << "******************************************" << endl;
}