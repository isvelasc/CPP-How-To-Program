#include "Employee.h"
#include <iostream>

Employee::Employee(std::string firstName, std::string lastName, int salary) {
    setFirstName(firstName);
    setLastName(lastName);
    setSalary(salary);
}

void Employee::setFirstName(std::string first) {
    firstName = first;
}

void Employee::setLastName(std::string last) {
    lastName = last;
}

void Employee::setSalary(int currSalary) {
    if (currSalary < 0)
        salary = 0;
    else
        salary = currSalary;
}

std::string Employee::getFirstName() const {
    return firstName;
}

std::string Employee::getLastName() const {
    return lastName;
}

int Employee::getSalary() const {
    return salary;
}