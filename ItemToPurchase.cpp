#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(string name, string desc, int price, int qty) {
    itemName = name;
    itemDescription = desc;
    itemPrice = price;
    itemQuantity = qty;
}

// SetName() & GetName() (2 pts)
void ItemToPurchase::SetName(string name) {
    itemName = name;
}
string ItemToPurchase::GetName() const {
    return itemName;
}
// SetPrice() & GetPrice() (2 pts)
void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}
int ItemToPurchase::GetPrice() const {
    return itemPrice;
}
// SetQuantity() & GetQuantity() (2 pts)
void ItemToPurchase::SetQuantity(int qty) {
    itemQuantity = qty;
}
int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

// SetDescription() mutator & GetDescription() accessor (2 pts)
void ItemToPurchase::SetDescription(string desc) {
    itemDescription = desc;
}
string ItemToPurchase::GetDescription() const {
    return itemDescription;
}
// PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
void ItemToPurchase::PrintItemCost() const {
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemQuantity * itemPrice) << endl;
}
// PrintItemDescription() - Outputs the item name and description
void ItemToPurchase::PrintItemDescription() const {
    cout << itemName << ": " << itemDescription << endl;
}