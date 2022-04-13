#include "Store.hpp"

#include <memory>


Store::Store(std::string _name, double _x, double _y) 
    : Node(_name, _x, _y), Storage(999) {};

void Store::add_order(Order _order) {
    order_list.push_back(_order);
};

void Store::make_basket(std::string _label, std::string _destination) {

    /**
     * either way works, both store the data in the heap
     * 1. std::unique_ptr<Basket> basket = std::make_unique<Basket>(_label, _destination); 
     * 2. std::unique_ptr<Basket> basket (new Basket(_label, _destination));
     */
    
    std::unique_ptr<Basket> basket (new Basket(_label, _destination));

    add(basket);
};

void Store::load_basket(std::string basket_label, std::string robot_label) {
    
    // take the basket from the store storage
    std::unique_ptr<Basket> basket = take(basket_label);

    // put the basket to the robot storage
    robot_list[robot_label]->add(basket);
};


void Store::send_robots(std::string robot_label) {
    robot_list[robot_label]->start_delivery();
};