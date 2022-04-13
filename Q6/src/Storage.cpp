#include <iostream>

#include "Storage.hpp"

Storage::Storage(int _capacity) : capacity(_capacity) {};


void Storage::add(std::unique_ptr<Basket> & _basket) {
    
    bool space_available = basket_list.size() < capacity;

    if (space_available) {
        // obtain label
        std::string label = _basket->get_label();

        // add (label, basket) to map
        basket_list.insert( std::make_pair(label, std::move(_basket)) );
    } else {
        // no more space
        std::cout << "no more space" << std::endl;
    }

};


std::unique_ptr<Basket> Storage::take(std::string _label) {

    // obtain item
    std::unique_ptr<Basket> basket = std::move(basket_list[_label]);

    // remove element from map
    std::map< std::string, std::unique_ptr<Basket> >::iterator it = basket_list.find(_label);
    basket_list.erase(it);

    // return item
    return basket;
}; 

