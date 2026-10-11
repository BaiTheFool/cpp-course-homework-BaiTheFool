#include<iostream>
#include<cstdio>
using namespace std;
int t;
void input(){
    printf("Enter:\n");
    scanf("%d",&t);
}
void calculate(){
    int h,m,s;
    h=t/3600;t%=3600;//计算有多少个小时，并留下不足一小时的部分
    m=t/60;t%=60;//计算有多少分钟，留下不足一分钟的部分
    s=t;//剩下的就是秒数
    printf("hour:%d minute:%d second:%d\n",h,m,s);
}
int main(){
    input();
    calculate();
    return 0;
}
