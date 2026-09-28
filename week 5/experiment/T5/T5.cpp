#include<iostream>
#include<cstdio>
using namespace std;
int d;
void input(){
    printf("Enter:\n");
    scanf("%d",&d);
}
void calculate(){
    for (int i=0;i<5;i++){
        printf("%d\n",d%10);
        d/=10;
    }
}
int main(){
    input();
    calculate();
    return 0;
}
