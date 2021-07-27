#ifndef CH_3_EMPLOYEE_H
#define CH_3_EMPLOYEE_H

#include <string>

class Employee {
public:
    explicit Employee( std::string, std::string, int );
    void setFirstName( std::string );
    void setLastName( std::string );
    void setSalary( int );
    std::string getFirstName() const;
    std::string getLastName() const;
    int getSalary() const;

private:
    std::string firstName;
    std::string lastName;
    int salary;

};


#endif //CH_3_EMPLOYEE_H
