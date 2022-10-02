#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart {
public:
    ShoppingCart(string name = "none", string date = "January 1, 2016");
    string GetCustomerName() const;
    string GetDate() const;
    void AddItem(ItemToPurchase item);
    void RemoveItem(string name);

private:
    string customerName;
    string currentDate;
    vector <ItemToPurchase> cartItems;

};

#endif
