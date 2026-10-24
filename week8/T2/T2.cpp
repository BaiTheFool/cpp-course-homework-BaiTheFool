#include<cstdio>
int search(int l,int r,int aim){//二分查找
    while(l<=r){
        int mid=(l+r)/2;
        if(mid*mid<aim)
            l=mid+1;
        else if(mid*mid>aim)
            r=mid-1;
        else
            return mid;
    }
    return -1;
}
int main(){
    for(int h=1;h<=500;h++)//遍历斜边
        for(int d1=1;d1<h;d1++)//遍历直角边1
        {
            int d2=0;
            int d2Pre=h*h-d1*d1;
            d2=search(d1,h-1,d2Pre);//二分查找符合要求的直角边2，且要求直角边2大于直角边1
            if(d2==-1)continue;//没找到则跳过
            printf("%d %d %d\n",d1,d2,h);//输出
        }
}