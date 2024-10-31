#include <iostream>
#include <string>
#include "PreMadeItem.h"

PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size), name(name) {
    if (size == "small") {
        price = 4.0;
    }
    else if (size == "medium") {
        price = 6.0;
    }
    else {
        price = 7.5;
    }
}

PreMadeItem::~PreMadeItem () {}

std::string PreMadeItem::composeItem() {
    std::string res = "Pre-made Size: ";
    res += size + '\n';
    res += "Pre-made Item: " + name + '\n';
    std::string temp = std::to_string(price);
    temp = temp.substr(0, temp.find('.') + 3);
    res += "Price: $" + temp + '\n';
    return res;
}

double PreMadeItem::getPrice() {
    return price;
}
