/*
 @file D16_ejr16-12_main.cpp
 @brief Exercise validation
 Para compilar todos os arquivos

 $ g++ ClassDefinition.cpp main.cpp  -o main
*/

#include "D16_ejr16-12_Inventory.h"
#include <iostream>
using namespace std;

int main ()
{
  Inventory inventoryObj1 ("PLC-STM", 20);
  // Inventory inventoryObj2 ("PLC-INTERFACE");

  inventoryObj1.purchaseProduct ("PLC-STM", 10);
  cout << "Stock PLC-STM: " << inventoryObj1.getStock ("PLC-STM") << endl;

  inventoryObj1.saleProduct ("PLC-STM", 25);
  cout << "Stock PLC-STM: " << inventoryObj1.getStock ("PLC-STM") << endl;
}