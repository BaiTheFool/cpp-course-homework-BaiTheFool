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
    h=t/3600;t%=3600;
    m=t/60;t%=60;
    s=t;
    printf("hour:%d minute:%d second:%d\n",h,m,s);
}
int main(){
    input();
    calculate();
    return 0;
}
