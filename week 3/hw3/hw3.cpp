#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
char chr[15];
void input(){
    printf("Input a five-digit integer:\n");
    scanf("%s",chr);
    return;
}
void calculate(){
    for(int i=0;i<5;i++){
        printf("%c ",chr[i]);
    }
} 
int main(){
    input();
    calculate();
    return 0;
}