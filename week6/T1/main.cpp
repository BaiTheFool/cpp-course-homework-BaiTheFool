#include "Date.h"
#include <cstdio>
int main(){
    //测试合法日期
    Date date1(10, 11, 2026);
    printf("日期1：");
    date1.displayDate();
    //测试非法日期
    Date date2(15 ,11, 2026);
    printf("日期2：");
    date2.displayDate();
    //测试修改月份
    date2.setMonth(5);
    printf("修改后的日期2：");
    date2.displayDate();
    return 0;
}