/*
 @file D16_ejm02_GradeBook.cpp
 @brief Define class GradeBook with a member function that takes a parameter,
 create a GradeBook object and call its displayMessage function.
*/

#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
  void displayMessage (string courseName) const
  {
    cout << "Welcome to the " << courseName << " course!" << endl;
  }
};

int main ()
{
  GradeBook myGradeBook;
  string nameOfCourse;

  cout << "Enter the course name: ";
  getline (cin, nameOfCourse);

  // myGradeBook.displayMessage ("C/C++");
  myGradeBook.displayMessage (nameOfCourse);
}