#include<iostream>
using namespace std;
int n,cnt=0;
int main(){
    std::cin>>n;//输入n
    for(int i=1;i<=n;i++)//第一层循环n次
    {
        for(int j=1;j<=n;j++)//第二层循环n次
        {
            cnt++;//计数器+1
            cout<<cnt<<" ";
        }
        cout<<std::endl;//换行
    }
    
    return 0;
}
