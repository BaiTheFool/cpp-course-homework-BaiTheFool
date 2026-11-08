
#include <iostream>
#include <iomanip>
#include <cmath> // 添加 <cmath> 以使用 pow
using namespace std;

int main()
{
    int i = 1;
    int j = 1; // 在循环外部声明 j，确保后面的代码能访问到它
    double a;
    double b;
    
    cout << setprecision( 2 );
    
    // 去掉 int，直接使用外部的 i，保证 i 的初始值为 1
    for ( i = 1; i <= 2; i++ ) 
        cout << "i is now equal to " << i << endl;
    
    // 去掉 int，使用外部的 j
    for ( j = 1; j <= 3; j++ ) 
    {
        cout << "\tj is now equal to " << j << endl;
        
        cout << "\t\ti + j = " << i + j << "\ti - j = " 
             << i - j << endl;
        cout << "\t\ti * j = " << i * j << "\ti ^ j = " 
             << pow( i, j ) << endl;
             
        if ( j == 0 ) // 把 = 改为 ==
            continue;
        else
        {
            a = i;
            b = j;
            // a / b 后面加上 <<
            // 把 a % b 改为 i % j (取模只能用于整数)
            cout << "\t\ti / j = " << a / b 
                 << "\ti % j = " << i % j << endl; 
        } 
    } 
    
    cout << "\nThe final values of i and j are: " << i
    << " and " << j << endl;
    
    return 0;
} 