#include<iostream>
using namespace std;
int n,cnt=0;
int main(){
    std::cin>>n;//输入n
    for(int i=1;i<=n;i++)//第一层循环n次
    {
        cnt=i;//计数器设为i
        for(int j=1;j<=n;j++)//第二层循环i次
        {
            cout<<cnt<<" ";//输出计数器数字
            cnt= cnt % n + 1;//计数器+1,达到n时则回到1
        }
        cout<<std::endl;//换行
    }
    
    return 0;
}
