/*
 @file D16_ejm05_headerGradeBook.cpp
 @brief Including class GradeBook from file GradeBook.h for use in main.
*/

#include "D16_ejm05_headerGradeBook.h"
#include <iostream>
using namespace std;

int main ()
{
  GradeBook gradeBook1 ("CS101 Introduction to C++ Programming");
  GradeBook gradeBook2 ("CS102 Data Structures in C++");

  cout << "gradeBook1 created for course: " << gradeBook1.getCourseName ()
       << "\ngradeBook2 created for course: " << gradeBook2.getCourseName ()
       << endl;
}
