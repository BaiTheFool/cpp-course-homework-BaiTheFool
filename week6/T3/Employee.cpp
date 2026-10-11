#include <iostream>
#include <string>
#include "Employee.h"
#include <algorithm>
using namespace std;
Employee::Employee(std::string firstName,std::string lastName,int salary){
    setFirstName(firstName);
    setLastName(lastName);
    setSalary(salary);
}
void Employee::setFirstName( std::string firstName ){
    this->firstName = firstName;
}
void Employee::setLastName( std::string lastName ){
    this->lastName = lastName;
}
void Employee::setSalary( int salary ){
    this->salary=max(salary,0);
}
std::string Employee::getFirstName()const{
    return firstName;
}
std::string Employee::getLastName()const{
    return lastName;
}
int Employee::getSalary()const{
    return salary;
}