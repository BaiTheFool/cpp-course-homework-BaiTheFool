#include <iostream>
#include "GradeBook.h"
using namespace std;

int main() {
    // 使用修改后的构造函数，传入课程名和教师名
    GradeBook myGradeBook("Genshin Impact 401: Advanced Elemental Theory", "Professor Phanes");
    
    // 展示信息
    myGradeBook.displayMessage();
    
    // 测试 set 和 get 功能
    cout << "\n测试修改教师名字" << endl;
    myGradeBook.setInstructorName("Professor Nibelung");
    myGradeBook.displayMessage();
    
    return 0;
}