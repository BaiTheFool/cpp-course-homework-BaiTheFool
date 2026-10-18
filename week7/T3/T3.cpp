/*Pseudocode:
BEGIN
    INPUT a
    FOR i=1 TO 5 DO
        num[i] = a%10
        a = a / 10
    END FOR
    IF num[1] == num[5] AND num[2] == num[4] THEN
        PRINT This is a Palindrome.
    ELSE
        PRINT This isn't a Palindrome.
    END IF
END
*/
#include<cstdio>
#include<iostream>
#include <algorithm>

int main(){
    int a , num[6] ;
    std::cout << "Input a five-digit integer: ";
    std::cin >> a;
    for( int i = 1 ; i <= 5 ; i++ ){
        num[i] = a%10;
        a /= 10;
    }
    if ( num[1]==num[5] && num[2]==num[4] )
        std::cout << "This is a Palindrome.";
    else
        std::cout << "This isn't a Palindrome.";
    return 0 ; 

}