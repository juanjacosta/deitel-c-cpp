/**
 * Para compilar todos os arquivos

   $ g++ D16_ejm06_implementacao.cpp D16_ejm06_main.cpp  -o D16_ejm06_main

 */
#include "D16_ejm06_interface.h"
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