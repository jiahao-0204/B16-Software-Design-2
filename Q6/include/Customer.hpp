#ifndef _CUSTOMER_HPP_
#define _CUSTOMER_HPP_

#include "Node.hpp"
#include "Storage.hpp"


class Customer : public Node, Storage {
    public: 
        Customer(std::string _name, double _x, double _y, int _num_ordered);
    private: 
        int num_ordered;
};

#endif