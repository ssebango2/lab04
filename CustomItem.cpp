#include "CustomItem.h"
#include <string>
#include <iostream>
#include <map>


CustomItem::CustomItem(std::string size) : IceCreamItem(size) {
    if (size == "small") {
        price = 3.00;
    }
    else if (size == "medium") {
        price = 5.00;
    }
    else {
        price = 6.50;
    }
}

CustomItem::~CustomItem() {
}

void CustomItem::addTopping(std::string topping) {
    if (myMap.find(topping) == myMap.end()) {
        myMap[topping] = 1;
    }
    else {
        myMap[topping]++;
    }
    price += 0.4;
}

std::string CustomItem::composeItem() {
    std::string res = "Custom Size: ";
    res += size;
    res += '\n';
    res +="Toppings:";
    res += '\n';
    for (auto pair : myMap) {
        res += pair.first + ": ";
        res += std::to_string(pair.second) + " oz" + '\n';
    }
    std::string temp = std::to_string(price);
    temp = temp.substr(0, temp.find('.') + 3);
    res += "Price: $" + temp + '\n';
    return res;
}

double CustomItem::getPrice () {
    return price;
}

