#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    //创建两个Employee对象
    //传入负数月薪，测试setSalary校验逻辑
    Employee emp1("John", "Doe", 5000);
    Employee emp2("Jane", "Smith", -3000);

    //显示初始年薪（月薪 * 12）
    cout << "Employee 1: " << emp1.getFirstName() << " " << emp1.getLastName() 
         << ", Yearly Salary: $" << emp1.getSalary() * 12 << endl;
         
    cout << "Employee 2: " << emp2.getFirstName() << " " << emp2.getLastName() 
         << ", Yearly Salary: $" << emp2.getSalary() * 12 << endl;

    // 给每人加薪 10%
    // 由于 salary 是 int，结果如果有小数会被截断
    emp1.setSalary(emp1.getSalary() * 1.1);
    emp2.setSalary(emp2.getSalary() * 1.1);

    // 显示加薪后的年薪
    cout << "Yearly Salaries After 10% Raise" << endl;
    cout << "Employee 1: " << emp1.getFirstName() << " " << emp1.getLastName() 
         << ", Yearly Salary: $" << emp1.getSalary() * 12 << endl;
         
    cout << "Employee 2: " << emp2.getFirstName() << " " << emp2.getLastName() 
         << ", Yearly Salary: $" << emp2.getSalary() * 12 << endl;

    return 0;
}