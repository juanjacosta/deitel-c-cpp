/*
 @file D16_ejm06_interface.h
 @brief GradeBook class definition. This file presents GradeBook's public
 interface without revealing the implementations of GradeBook's member
 functions, which are defined in GradeBook.cpp
*/

#include <string>

class GradeBook
{
public:
  explicit GradeBook (std::string);
  void setCourseName (std::string);
  std::string getCourseName () const;
  void displayMessage () const;

private:
  std::string courseName;
};