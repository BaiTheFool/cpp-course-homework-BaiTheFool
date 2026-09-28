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
    maxx = max(max(a,b),c);
    minn = min(min(a,b),c);
    aver = (a+b+c)/3.0;
    printf("max : %d\nmin : %d\naverage : %.2f\n",maxx,minn,aver);
}
int main(){
    input();
    calculate();
    return 0;
}