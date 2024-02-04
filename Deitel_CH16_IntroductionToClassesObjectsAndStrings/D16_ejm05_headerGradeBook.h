/*
 @file D16_ejm05_headerGradeBook.cpp
 @brief GradeBook class definition in a separate file from main.
*/

#include <iostream>
#include <string>

class GradeBook
{
public:
  explicit GradeBook (std::string name) : courseName (name) {} // constructor

  void setCourseName (std::string name) { courseName = name; }

  std::string getCourseName () const { return courseName; }

  void displayMessage () const
  {
    std::cout << "Welcome to the grade book for " << getCourseName () << "!"
              << std::endl;
  }

private:
  std::string courseName;
};