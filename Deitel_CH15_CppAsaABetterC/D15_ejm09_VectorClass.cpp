/*
 Programa : ejm_09_VectorClass.cpp
 Proposito: Mostrar el uso de la clase Vector
 */

#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

void outputVector (const vector<int> &);
void inputVector (vector<int> &);

int
main ()
{
  cout << "Class Template vector" << endl;

  vector<int> integers1 (7);  // 7 element vector< int >
  vector<int> integers2 (10); // 10 element vector< int >

  // print size and contents of integers 1
  cout << "Size of vector integers1: " << integers1.size () << endl;
  cout << "Content of vector integers1 after initialization: " << endl;
  outputVector (integers1);

  // print size and contents of integers 2
  cout << "\nSize of vector integers2: " << integers2.size () << endl;
  cout << "Content of vector integers2 after initialization: " << endl;
  outputVector (integers2);

  // Input and print integers1
  cout << "\nEnter 7 integers for integers1: " << endl;
  inputVector (integers1);

  cout << "\nEnter 10 integers for integers2: " << endl;
  inputVector (integers2);

  // contents after input
  cout << "After input vectors contain : " << endl;
  cout << "integers1" << endl;
  outputVector (integers1);
  cout << "integers2" << endl;
  outputVector (integers2);

  // use inequality (!=) operator with vector objects
  if (integers1 != integers2)
    {
      cout << "integers1 and integers2 are not equal" << endl;
    }

  // create vector integers3 using integers1 as an
  // initializer; print size and contents
  vector<int> integers3 (integers1); // copy constructor
  cout << "\nSize of vector integers3: " << integers3.size () << endl;
  cout << "Content of vector integers3 after initialization: " << endl;
  outputVector (integers3);

  // use overloaded assignment (=) operator
  cout << "\nAssigning integers2 to integers1: " << endl;
  integers1 = integers2;

  cout << "integers1" << endl;
  outputVector (integers1);
  cout << "integers2" << endl;
  outputVector (integers2);

  // use equality (==) operator with vector objects
  if (integers1 == integers2)
    {
      cout << "integers1 and integers2 are equal" << endl;
    }

  // use square brackets to create rvalue
  cout << "\nintegers1[5]: " << integers1[5];
  cout << "\nintegers1.at(5): " << integers1.at (5);

  // use square brackets to create lvalue
  cout << "\n\nAssigning 1000 to integers1[5]" << endl;
  integers1[5] = 1000;
  cout << "integers1" << endl;
  outputVector (integers1);

  // attempt to use out-of-range index
  try
    {
      cout << "\nAttemp to display integers1.at(15)" << endl;
      cout << integers1.at (15) << endl; // ERROR: out of range
    }
  catch (out_of_range &ex)
    {
      cout << "An exception ocurred: " << ex.what () << endl;
    }
}

void
outputVector (const vector<int> &array)
{
  size_t i;

  for (i = 0; i < array.size (); ++i)
    {
      cout << setw (12) << array[i];

      if ((i + 1) % 4 == 0)
        {
          cout << endl;
        }
    }

  if (i % 4 != 0)
    {
      cout << endl;
    }
}
void
inputVector (vector<int> &array)
{
  for (size_t i = 0; i < array.size (); ++i)
    {
      cin >> array[i];
    }
}