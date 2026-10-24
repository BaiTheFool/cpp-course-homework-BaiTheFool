#include<cstdio>
#include<iostream>
int n,a,sum=0;
int main(){
    std::cin>>n;
    for(int i = 1 ; i <= n ; i++){
        std::cin>>a;
        sum+=a;
    }
    std::cout<<sum;
}