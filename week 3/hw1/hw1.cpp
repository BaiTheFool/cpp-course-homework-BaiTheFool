#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[3];
void input(){
    printf("Input three different integers:\n");
    for(int i=0;i<3;i++)
        scanf("%d",&a[i]);
    return;
}
void calculate(){
    printf("Sum is %d\n",a[0]+a[1]+a[2]);
    printf("Average is %.2f\n",(a[0]+a[1]+a[2])/3.0);
    printf("Product is %d\n",a[0]*a[1]*a[2]);
    printf("Smallest is %d\n",min(min(a[0],a[1]),a[2]));
    printf("Largest is %d",max(max(a[0],a[1]),a[2]));
    return;
} 
int main(){
    input();
    calculate();
    return 0;
}