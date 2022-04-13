#include "Customer.hpp"

Customer::Customer(std::string _name, double _x, double _y, int _num_ordered) 
    : Node(_name, _x, _y), Storage(999), num_ordered(_num_ordered) {};
