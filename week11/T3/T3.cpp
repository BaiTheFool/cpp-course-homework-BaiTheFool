#include <iostream>
#include <utility>
void BubbleSort(int* begin,int* end)
{
    for(int* i=begin;i<end-1;i++){
        for(int* j=begin;j<end-1-(i-begin);j++){
            if(*j > *(j+1))std::swap(*j,*(j+1));
        }
    }
}
int main(){
    int a[10];
    for(int i=0;i<10;i++)std::cin>>a[i];
    BubbleSort(a,a+10);
    for(int i=0;i<10;i++)std::cout<<a[i]<<" ";
    
}
