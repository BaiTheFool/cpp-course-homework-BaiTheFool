#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a;
void input(){
    printf("Enter an integer:\n");
    scanf("%d",&a);
    return;
}
void calculate(){
    printf("%d is %s\n",a,(a%2==0)?"even":"odd");
    return;
} 
int main(){
    input();
    calculate();
    return 0;
}