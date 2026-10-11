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
        printf("%d\n",d%10);//每次对10取模得到最后一位数
        d/=10;//再通过/10消去最后一位，继续对下一位运算
    }
}
int main(){
    input();
    calculate();
    return 0;
}
