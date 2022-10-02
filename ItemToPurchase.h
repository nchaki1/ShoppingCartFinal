#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */

class ItemToPurchase {
public:
    // Parameterized constructor to assign item name, item description, item price, and item quantity (default values of 0). (1 pt)
    ItemToPurchase(string name = "none", string desc = "none", int price = 0, int qty = 0);

    // SetName() & GetName() (2 pts)
    void SetName(string name);
    string GetName() const;
    // SetPrice() & GetPrice() (2 pts)
    void SetPrice(int price);
    int GetPrice() const;
    // SetQuantity() & GetQuantity() (2 pts)
    void SetQuantity(int qty);
    int GetQuantity() const;

    // SetDescription() mutator & GetDescription() accessor (2 pts)
    void SetDescription(string desc);
    string GetDescription() const;
    // PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
    void PrintItemCost() const;
    // PrintItemDescription() - Outputs the item name and description
    void PrintItemDescription() const;

private:
    string itemName;
    string itemDescription;
    int itemPrice;
    int itemQuantity;

};

#endif
