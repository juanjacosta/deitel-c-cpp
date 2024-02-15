/*
  @file D16_ejr16-12_inventory.cpp
  @brief Create an Inventory class that a warehouse might use to represent
  their stock of products and raw materials. Include a data member of type
  string to provide a description of the product, and data member of type int
  to represent the balance stock.

  Provide a constructor that receives an initial product and uses it to
  initialize the data members.

  The constructor should validate the initial product to ensure it has a stock
  greater than 20, which is the company’s minimum stock level. If not, it
  should display an error message.

  Provide three member functions:

  - Member function Purchase should add a product to the current stock.
  - Member function Sale should reduce stock. Ensure after each sale that the
  stock level does not drop below 20.
  - Member function getStock should return the current stock.

  Create a program that creates two Inventory objects and tests the member
  functions of the class.
*/

#include "D16_ejr16-12_Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory (string _productDescription,
                      int _balanceStock) // constructor
{
  balanceStock = _balanceStock;
  productDescription = _productDescription;
  validateStock (_productDescription);
}

/*
 @brief add a product to the current stock
 @param1 _productDescription receives a string with the product description
 @param2 _balanceStock receives a int with the number of items
*/
void Inventory::purchaseProduct (string _productDescription, int _balanceStock)
{
  productDescription = _productDescription;
  balanceStock += _balanceStock;
}

void Inventory::validateStock (string _productDescription)
{
  if (_productDescription == productDescription)
    {
      if (balanceStock < 20)
        {
          cerr << "The product " << productDescription
               << " is below the company's minimum stock level\n"
               << "Minimum level: 20 units\n"
               << "Product stock: " << balanceStock << " units" << endl;
        }
      else
        {
          displayMessage (productDescription, balanceStock);
        }
    }
  else
    {
      cerr << "Non-existent product" << endl;
    }
}

void Inventory::saleProduct (string _productDescription, int _saleStock)
{
  if (_productDescription == productDescription)
    {
      balanceStock -= _saleStock;
    }
  else
    {
      cerr << "Non-existent product" << endl;
    }
}

int Inventory::getStock (string _productDescription) const
{
  if (_productDescription == productDescription)
    {
      return balanceStock;
    }
  else
    {
      cerr << "Non-existent product" << endl;
    }
  return 0;
}

void Inventory::displayMessage (string _productDescription,
                                int _balanceStock) const
{
  cout << "Product Description: " << _productDescription << "\n"
       << "Balance Stock: " << _balanceStock << endl;
}
