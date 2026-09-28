#include<iostream>
#include<cstdio>
using namespace std;
char c;
void input(){
    printf("Enter:\n");
    scanf("%c",&c);
}
void calculate(){
    printf("%c\n%c\n%c\n",c-('a'-'A'),c-1,c+1);
}
int main(){
    input();
    calculate();
    return 0;
}
