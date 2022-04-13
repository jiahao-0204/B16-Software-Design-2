#include "Basket.hpp"


Basket::Basket(std::string _label, std::string _destination) 
    : label(_label), destination(_destination) {};


// Getter
std::string Basket::get_label() {return label;};
std::string Basket::get_destination() { return destination; };