/*
  @file D16_ejr16-12_inventoryClass.h
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

#include <string>

class Inventory
{
public:
  Inventory (std::string, int); // constructor
  // void validateProduct ();
  void validateStock (std::string);
  void purchaseProduct (std::string, int);
  void saleProduct (std::string, int);
  int getStock (std::string) const;
  void displayMessage (std::string, int) const;

private:
  std::string productDescription;
  int balanceStock;
};