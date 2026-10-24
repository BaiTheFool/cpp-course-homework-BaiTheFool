
#include<cstdio>
#include<iostream>
#include <algorithm>

int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(j<=i)std::cout<<"*";
            else std::cout<<" ";
        }
        std::cout<<"    ";
        for(int j=1;j<=10;j++){
            if(j<=10-i+1)std::cout<<"*";
            else std::cout<<" ";
        }
        std::cout<<"    ";
        for(int j=1;j<=10;j++){
            if(j>=i)std::cout<<"*";
            else std::cout<<" ";
        }
        std::cout<<"    ";
        for(int j=1;j<=10;j++){
            if(j>=10-i+1)std::cout<<"*";
            else std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}