/**
 * @file D16_ejr16-11_GradeBook.cpp
 * @brief Modify class GradeBook (Figs. 16.11–16.12) as follows:

  a) Include a second string data member that represents the course
  instructor’s name.
  b) Provide a set function to change the instructor’s name and a get function
 to retrieve it. c) Modify the constructor to specify course name and
 instructor name parameters. d) Modify function displayMessage to output the
 welcome message and course name, then the string "This course is presented by:
 " followed by the instructor’s name.

  Use your modified class in a test program that demonstrates the class’s new
 capabilities.
*/

#include "D16_ejr16-11_GradeBook.h"
#include <iostream>

#define TAM 5
using namespace std;

GradeBook::GradeBook (string _courseName, string _instructorName)
{
  setCourseName (_courseName);
  setInstructorName (_instructorName);
}

void GradeBook::setCourseName (string _courseName)
{
  if (_courseName.size () <= TAM)
    {
      courseName = _courseName;
    }

  if (_courseName.size () > TAM)
    {
      courseName = _courseName.substr (0, 5);
      cerr << "Warning! Course Name, " << _courseName << ", too long; max "
           << TAM << " characters" << endl;
    }
}

void GradeBook::setInstructorName (string _instructorName)
{
  if (_instructorName.size () <= TAM)
    {
      courseInstructorName = _instructorName;
    }

  if (_instructorName.size () > TAM)
    {
      courseInstructorName = _instructorName.substr (0, TAM);
      cerr << "Warning! Instructor Name, " << _instructorName
           << ", too long; max " << TAM << " characters" << endl;
    }
}

string GradeBook::getCourseName () const { return courseName; }

string GradeBook::getInstructorName () const { return courseInstructorName; }

void GradeBook::displayMessage () const
{
  cout << "Welcome to the grade book for " << getCourseName () << "!" << endl;
  cout << "This course is presented by: " << getInstructorName () << "."
       << endl;
}