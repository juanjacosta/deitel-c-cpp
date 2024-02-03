/*
 @file D16_ejm03_GradeBook.cpp
 @brief Define class GradeBook that contains a courseName data member and
 member functions to set and get its value; Create and manipulate a GradeBook
 object with these functions.
*/

#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
  void setCourseName (string name) { courseName = name; }

  string getCourseName () const { return courseName; }

  void displayMessage () const
  {
    cout << "Welcome to the grade book for " << getCourseName () << "!"
         << endl;
  }

private:
  string courseName;
};

int main ()
{
  string nameOfCourse;
  GradeBook myGradeBook;

  cout << "Initial course name: " << myGradeBook.getCourseName () << endl;

  cout << "Enter the course name: " << endl;
  getline (cin, nameOfCourse);
  myGradeBook.setCourseName (nameOfCourse);

  cout << endl;
  myGradeBook.displayMessage ();
}