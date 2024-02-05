/*
 @file D16_ejm07_GradeBook.h
 @brief GradeBook class definition presents the public interface of the class.
 Member-function definitions appear in GradeBook.cpp
*/

#include <string>

class GradeBook
{
public:
  explicit GradeBook (std::string); // constructor
  void setCourseName (std::string);
  std::string getCourseName () const;
  void displayMessage () const;

private:
  std::string courseName;
};