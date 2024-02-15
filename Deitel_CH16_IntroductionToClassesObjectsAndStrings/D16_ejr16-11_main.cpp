/*
 @file D16_ejr16-11_main.cpp
 @brief Exercise validation

 Para compilar todos os arquivos

 $ g++ ClassDefinition.cpp main.cpp  -o main
*/

#include "D16_ejr16-11_GradeBook.h"
#include <iostream>
using namespace std;

int main ()
{
  GradeBook gradeBook1 ("MQI10", "Juan");
  GradeBook gradeBook2 ("ELE2004", "Mauricio");

  cout << "gradeBook1 initial course name and instructor name: "
       << gradeBook1.getCourseName () << ", "
       << gradeBook1.getInstructorName ()
       << "\ngradeBook2 initial course name and instructor name: "
       << gradeBook2.getCourseName () << ", "
       << gradeBook2.getInstructorName () << endl;
}
