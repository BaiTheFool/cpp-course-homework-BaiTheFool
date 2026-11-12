#include<iostream>
#include<string>
using str = std::string;
void stringReverse(str s,int sub) {
    if(s[sub] == '\0')
        return;
    stringReverse(s,sub+1);
    std::cout<<s[sub];
}
int main(){
    str s;
    std::cin>>s;
    stringReverse(s,0);
}