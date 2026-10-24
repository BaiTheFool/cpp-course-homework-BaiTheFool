/*Pseudocode:
BEGIN
    INPUT sales
    WHILE sales != -1
        salary <- CalculateSalary(sales)
        PRINT salary
        INPUT sales
    END WHILE
END
PROCEDURE CalculateSalary(sales)
    SET baseSalary = 200
    SET commission = sales * 0.09
    SET total = baseSalary + commission
    RETURN total
END PROCEDURE
*/
#include<cstdio>
#include<iostream>
double sales;
double CalculateSalary(double sales){
    double baseSalary = 200;
    double commission = sales * 0.09; 
    double total = baseSalary + commission;
    return total;
}
int main(){
    std::cout << "Input sales of last week : ";
    std::cin >> sales;
    while( sales != -1 ){
        std::cout << CalculateSalary(sales) << std::endl;
        std::cout << "Input sales of last week : ";
        std::cin >> sales;
    }
    return 0;
}