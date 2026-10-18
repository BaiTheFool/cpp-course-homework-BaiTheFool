/*Pseudocode:
BEGIN
    INPUT a
    SET base = 1 , b = 0
    WHILE a != 0
        b = b + (a%10) * base
        a = a / 10
        base = base * 2
    END WHILE
    PRINT b
END
*/
#include<cstdio>
#include<iostream>
#include <algorithm>

int main(){
    int a , b = 0, base = 1;
    std::cout << "Input a binary integer: ";
    std::cin >> a;
    while( a != 0 ){
        b += (a % 10)*base;
        a/=10;
        base*=2;
    }
    std::cout << b;
    return 0 ; 
}