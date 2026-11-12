#include<iostream>
#include<vector>
#include<unordered_set>
std::unordered_set<int> is_in;
std::vector<int> arr;
int main(){
    for(int i=0;i<20;i++){
        int a;
        std::cin>>a;
        if(is_in.count(a))continue;
        is_in.insert(a);
        arr.push_back(a);
    }
    for(int x:arr){
        std::cout<<x<<" ";
    }
}