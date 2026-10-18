/*Pseudocode:
BEGIN
    FOR i=1 TO 3 DO
        INPUT length[i];
    END FOR
    SORT length IN ASCENDING ORDER
    IF length[3] < length[1] + length[2] THEN
        PRINT "They are the sides of a right triangle."
    ELSE
        PRINT "They aren't the sides of a right triangle."
    END IF
END
*/
#include<cstdio>
#include<iostream>
#include <algorithm>

int main(){
    int length[4];
    std::cout << "Input three integers: ";
    for( int i=1 ; i<=3 ; i++ ){
        std::cin >> length[i];
    }
    std::sort( length+1 , length+4 );
    if ( length[3] < length[1] + length[2] )
        std::cout << "They are the sides of a right triangle.";
    else
        std::cout << "They aren't the sides of a right triangle.";
    return 0 ; 

}