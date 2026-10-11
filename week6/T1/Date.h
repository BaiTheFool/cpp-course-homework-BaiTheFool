#include<cstdio>
class Date{
public:
    //构造函数的声明
    Date(int m,int d,int y);
    //set函数声明
    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);
    //get函数声明
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    //display函数
    void displayDate() const;
private:
    int month,day,year;
};
