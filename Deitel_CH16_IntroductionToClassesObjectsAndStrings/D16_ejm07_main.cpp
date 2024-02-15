/*
 @file D16_ejm07_main.cpp
 @Fig. 16.17
 @brief Create and manipulate a GradeBook object; illustrate validation.
*/

#include "D16_ejm07_GradeBook.h"
#include <iostream>
using namespace std;

int main ()
{
  GradeBook gradeBook1 ("CS101 Introduction to Programming in C++");
  GradeBook gradeBook2 ("CS102 C++ Data Structures");

  cout << "gradeBook1 initial course name: " << gradeBook1.getCourseName ()
       << "\ngradeBook2 initial course name: " << gradeBook2.getCourseName ()
       << endl;

  gradeBook1.setCourseName ("CS101 C++ Programming");

  cout << "\ngradeBook1's course name: " << gradeBook1.getCourseName ()
       << "\ngradeBook2's course name: " << gradeBook2.getCourseName ()
       << endl;
}
