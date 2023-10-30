/*
  @file D16_ejm01_GradeBook.cpp
  @brief  Write a program that implements a grade book for maintain
          students test scores
*/

#include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook           
{
public:
  void displayMessage () const
  {
    cout << "Welcome to the Grade Book!" << endl;
  }
};

int main ()
{
  GradeBook myGradeBook;            // created a GradeBook object
  myGradeBook.displayMessage ();    // call object's method
}