/*
 @file D16_ejm06_implementacao.cpp
 @brief GradeBook member-function definitions. This file contains
 implementations of the member functions prototyped in D16_ejm06_interface.h.
*/

#include "D16_ejm06_interface.h"
#include <iostream>
using namespace std;

GradeBook::GradeBook (string name) : courseName (name) {}

void GradeBook::setCourseName (string name) { courseName = name; }

string GradeBook::getCourseName () const { return courseName; }

void GradeBook::displayMessage () const
{
  cout << "Welcome to the grade book for " << getCourseName () << "!" << endl;
}