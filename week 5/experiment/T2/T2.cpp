#include<iostream>
#include<cstdio>
using namespace std;
double f;
void input(){
    printf("Enter:\n");
    scanf("%lf",&f);
}
void calculate(){
    printf("%.2f",(f-32)*5.0/9.0);
}
int main(){
    input();
    calculate();
    return 0;
}
