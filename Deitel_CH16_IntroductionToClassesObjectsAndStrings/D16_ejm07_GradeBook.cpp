/*
 @file D16_ejm07_GradeBook.cpp
 @Fig. 16.16
 @brief Implementations of the GradeBook member-function definitions: the
 setCourseName function performs validation.
*/

#include "D16_ejm07_GradeBook.h"
#include <iostream>
using namespace std;

GradeBook::GradeBook (string name) { setCourseName (name); }

void GradeBook::setCourseName (string name)
{
  if (name.size () <= 25)
    {
      courseName = name;
    }

  if (name.size () > 25)
    {
      courseName = name.substr (0, 25);
      cerr << "Name \"" << name << "\"exceeds maximum length (25).\n"
           << "Limiting courseName to first 25 characters \n"
           << endl;
    }
}

string GradeBook::getCourseName () const { return courseName; }

void GradeBook::displayMessage () const
{
  cout << "Welcome to the grade book for " << getCourseName () << "!" << endl;
}