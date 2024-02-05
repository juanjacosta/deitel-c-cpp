/*
  @file D16_ejr16-11_GradeBook.cpp
  @brief Implementation GradeBook modified class
*/

#include <string>

class GradeBook
{
public:
  GradeBook (std::string, std::string);
  void setCourseName (std::string);
  void setInstructorName (std::string);
  std::string getCourseName () const;
  std::string getInstructorName () const;
  void displayMessage () const;

private:
  std::string courseName;
  std::string courseInstructorName;
};