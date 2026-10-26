#include<iostream>
using namespace std;
int n;
int main(){
    std::cin>>n;//输入n
    for(int i=1;i<=n;i++)//第一层循环n次
    {
        for(int j=1;j<=n;j++)//第二层循环n次
            cout<<"*";//输出*
        cout<<std::endl;//换行
    }
    
    return 0;
}
