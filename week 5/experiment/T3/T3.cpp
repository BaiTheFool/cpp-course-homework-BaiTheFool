#include<iostream>
#include<cstdio>
using namespace std;
char c;
void input(){
    printf("Enter:\n");
    scanf("%c",&c);
}
void calculate(){
    printf("%c\n%c\n%c\n",c-('a'-'A'),'a'+(c-'a'+25)%26,'a'+(c-'a'+1)%26);
}
int main(){
    input();
    calculate();
    return 0;
}
