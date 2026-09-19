#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;
double weight,height;
void input(){
    printf("Input your weight in kilograms:\n");
    scanf("%lf",&weight);
    printf("Input your height in meters:\n");
    scanf("%lf",&height);
    return;
}
void calculate(){
    double bmi=weight/pow(height,2);
    printf("Your BMI is %lf\n",bmi);
    if(bmi>=30)printf("Obese");
    else if(bmi>=25)printf("Overweight");
    else if(bmi>=18.5)printf("Normal");
    else printf("Underweight");
    return;
} 
int main(){
    input();
    calculate();
    return 0;
}