#include<iostream>
#include<cstdio>
using namespace std;
int a,b,c;
void input(){
    printf("Enter:\n");
    scanf("%d%d%d",&a,&b,&c);
}
void calculate(){
    int maxx,minn;
    double aver;
    maxx = max(max(a,b),c);//最大值，嵌套使用max函数达成
    minn = min(min(a,b),c);//最小值，嵌套使用min函数达成
    aver = (a+b+c)/3.0;//除数写为3.0，保证运算结果为浮点数
    printf("max : %d\nmin : %d\naverage : %.2f\n",maxx,minn,aver);
}
int main(){
    input();
    calculate();
    return 0;
}