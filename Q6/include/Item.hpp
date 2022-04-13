#ifndef _ITEM_HPP_
#define _ITEM_HPP_

#include <string>

class Item {
    public:
        Item(std::string _label);
        std::string get_label();

    private:
        std::string label;
};

#endif