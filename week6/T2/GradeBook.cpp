#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook( string course , string instructor)
    : courseName( course ),instructorName( instructor ){
}

void GradeBook::setCourseName( string name )
{
    courseName = name;
}
void GradeBook::setInstructorName(string instructor) {
    instructorName = instructor;
}
string GradeBook::getCourseName() const
{
    return courseName;
}
string GradeBook::getInstructorName() const
{
    return instructorName;
}
void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n" << getCourseName()
        << "!" << endl;
    cout << "This course is presented by: " << getInstructorName() << endl; 
}
