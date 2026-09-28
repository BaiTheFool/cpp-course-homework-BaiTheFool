#include<iostream>
#include<cstdio>
using namespace std;
int a,b;
void input(){
    printf("Enter 2 integers:\n");
    scanf("%d%d",&a,&b);
}
void calculate(){
    int result[5]={a+b,a-b,a*b,a/b,a%b};
    char chr[5]={'+','-','*','/','%'};
    for(int i=0;i<5;i++){
        printf("%d %c %d = %d\n",a,chr[i],b,result[i]);
    }
}
int main(){
    input();
    calculate();
    return 0;
}
