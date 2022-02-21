#include "Q6.h"
#include <iostream>

// ======================== ITEM ============================
std::string Item::get_label() { return label; };



// ======================== BASKET ============================

Basket::Basket(std::string _label, std::weak_ptr<Customer> _destiny) : Item(_label){
    destiny = _destiny;
};

std::weak_ptr<Customer> Basket::get_destiny() { return destiny; };



// ======================= STORAGE ============================

Storage::Storage(int _capacity) : capacity(_capacity) {};


void Storage::add(std::unique_ptr<Item> & _item) {
    bool space_available = item_list.size() < capacity;

    if (space_available) {
        // obtain label
        std::string label = _item->get_label();

        // add (label, basket) to map
        item_list.insert( std::make_pair(label, std::move(_item)) );
    } else {
        // no more space
        std::cout << "no more space" << std::endl;
    }

    
};


std::unique_ptr<Item> & Storage::take(std::string _label) {

    // obtain item
    std::unique_ptr<Item> item = std::move(item_list[_label]);

    // remove element from map
    std::map< std::string, std::unique_ptr<Item> >::iterator it = item_list.find(_label);
    item_list.erase(it);

    // return item
    return item;
}; 



// ======================= NODE ============================

Node::Node(std::string _name, double _x, double _y) {
    name = _name;
    x = _x;
    y = _y;
};


Store::Store(std::string _name, double _x, double _y, int _capacity) 
    : Node(_name, _x, _y), Storage(_capacity) {};

Customer::Customer(std::string _name, double _x, double _y, int _capacity, int _num_ordered) 
    : Node(_name, _x, _y), Storage(_capacity), num_ordered(_num_ordered) {};

Landmark::Landmark(std::string _name, double _x, double _y) 
    : Node(_name, _x, _y) {};