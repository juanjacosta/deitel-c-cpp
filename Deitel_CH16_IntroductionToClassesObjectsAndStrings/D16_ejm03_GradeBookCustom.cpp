/*
 @file D16_ejm03_customGradeBook.cpp
 @brief add courseTitle data member to the previous example
*/

#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
  void setCourseName (string name, string title)
  {
    courseName = name;
    courseTitle = title;
  }

  string getCourseName () const
  {
    string courseFullName = courseName + " " + courseTitle;

    return courseFullName;
  }

  void displayMessage () const
  {
    cout << "Welcome to the grade book for " << getCourseName () << "!"
         << endl;
  }

private:
  string courseName;
  string courseTitle;
};

int main ()
{
  string nameOfCourse, titleOfCourse;
  GradeBook myGradeBook;

  cout << "Initial course name: " << myGradeBook.getCourseName () << endl;

  cout << "Enter the course name: ";
  getline (cin, nameOfCourse);

  cout << "Enter the course title: ";
  getline (cin, titleOfCourse);
  myGradeBook.setCourseName (nameOfCourse, titleOfCourse);

  cout << endl;
  myGradeBook.displayMessage ();
}