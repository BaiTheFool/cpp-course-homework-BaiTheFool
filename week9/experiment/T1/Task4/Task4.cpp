#include<iostream>
using namespace std;
int n;
int main(){
    std::cin>>n;//输入n
    for(int i=1;i<=n;i++)//第一层循环n次
    {
        for(int j=1;j<=n-i;j++)//循环n-i次
            cout<<" ";//输出空格
        for(int j=1;j<=i*2-1;j++)//第二层循环i*2-1次
            cout<<"*";//输出*
        cout<<std::endl;
    }
    
    return 0;
}
