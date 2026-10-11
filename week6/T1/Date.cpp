#include "Date.h"
#include<cstdio>
//构造函数的实现
Date::Date(int m,int d,int y){
    setMonth(m);
    day = d;
    year = y;
}
//set函数的实现
void Date::setMonth(int m){
    if(m>=1&&m<=12)//判断月份是否合法
        month=m;
    else{
        month = 1;//不合法将month设为1并给出警告
        printf("警告：月份 %d 无效，已自动设为 1 \n",m);
    }
}
void Date::setDay(int d){
    day = d;
}
void Date::setYear(int y){
    year = y;
}
//get函数的实现
int Date::getMonth() const{ return month; }
int Date::getDay() const{ return day; }
int Date::getYear() const{ return year; }
//display函数的实现
void Date::displayDate() const{
    printf("%d / %d / %d \n",month,day,year);
}