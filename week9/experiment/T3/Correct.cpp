#include<iostream>
#include<vector>
#include<iomanip>
int n;
int cntbit(int a){//判断n位数
    int cnt=0;
    while(a>0){
        a/=10;
        cnt++;
    } 
    return cnt;
}
void walk(std::vector<std::vector<int>>* vec){
    int go[4][2]={{0,1},{1,0},{0,-1},{-1,0}};//方向：右下左上
    int x=0,y=0,dir=0,cnt=0;
    for(int i=1;i<=n*n;i++){
        (*vec)[x][y]=++cnt;
        int nx=x+go[dir][0];
        int ny=y+go[dir][1];
        if(nx<0||nx>=n||ny<0||ny>=n||(*vec)[nx][ny]!=0){//碰壁或者前方数字已经填过
            dir=(dir+1)%4;//转变方向
            nx=x+go[dir][0];
            ny=y+go[dir][1];
        }
        x=nx;
        y=ny;
    }
}
int main(){
    std::cin>>n;//输入n
    std::vector<std::vector<int>> vec (n,std::vector<int>(n,0));//建立2维数组
    int num=cntbit(n*n);
    walk(&vec);
    for(int i=0;i<n;i++)//第一层循环n次
    {
        for(int j=0;j<n;j++)//第二层循环n次
        {
            std::cout<<std::setw(num)<<vec[i][j];
            std::cout<<" ";
        }
        std::cout<<std::endl;//换行
    }
    
    return 0;
}