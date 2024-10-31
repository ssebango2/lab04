#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include <iostream>
#include <string>
#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem {
public:
    PreMadeItem(std::string name, std::string size);
    virtual ~PreMadeItem();
    std::string composeItem();
    double getPrice();
private:
    std::string name;
};

#endif