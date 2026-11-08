#include<cstdio>
#include<iostream>
#include<vector>
#include<limits>

std::vector<int> fib;
int int_cal_fibonacci(){
    fib.push_back(0);
    fib.push_back(1);
    int siz=2;
    while( fib[ siz-1 ] >= 0 ){
        siz=fib.size();
        fib.push_back(fib[siz-1]+fib[siz-2]);
    }
    return siz;
}

std::vector<double> db_fib;
int double_cal_fibonacci(){
    db_fib.push_back(0);
    db_fib.push_back(1);
    int siz=2;
    while( db_fib[ siz-1 ] < std::numeric_limits<double>::infinity()){//判断是否溢出
        siz=db_fib.size();
        db_fib.push_back(db_fib[siz-1]+db_fib[siz-2]);
    }
    return siz;
}

int main(){
    int maxint=int_cal_fibonacci();
    int maxdouble=double_cal_fibonacci();
    
    std::cout<<"The largest Fibonacci int that can be print is: "<<fib[maxint-2]<<std::endl;
    std::cout<<"The largest Fibonacci double that can be print is: "<<db_fib[maxdouble-2]<<std::endl;
    
    int n;
    std::cin>>n;
    std::cout<<fib[n-1];
    
    return 0;
}