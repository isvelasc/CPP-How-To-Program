#include <iostream>
#include "Invoice.h"

Invoice::Invoice(std::string partNumber, std::string partDescription, int itemQuantity, int itemPrice) {
    setPartNumber(partNumber);
    setPartDescription(partDescription);
    setItemQuantity(itemQuantity);
    setItemPrice(itemPrice);
}

void Invoice::setPartNumber(std::string partNumber) {
    number = partNumber;
}
void Invoice::setPartDescription(std::string partDescription) {
    description = partDescription;
}

void Invoice::setItemQuantity(int itemQuantity) {
    if (itemQuantity < 0)
        quantity = 0;
    else
        quantity = itemQuantity;
}

void Invoice::setItemPrice(int itemPrice) {
    if (itemPrice < 0)
        price = 0;
    else
        price = itemPrice;
}

std::string Invoice::getPartNumber() const {
    return number;
}

std::string Invoice::getPartDescription() const {
    return description;
}

int Invoice::getItemQuantity() const {
    return quantity;
}

int Invoice::getItemPrice() const {
    return price;
}

int Invoice::getInvoiceAmount() const {
    return getItemQuantity() * getItemPrice();
}
