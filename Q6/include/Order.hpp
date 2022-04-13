#ifndef _ORDER_HPP_
#define _ORDER_HPP_


#include <string>

class Order {
    public:
        Order(std::string _customer, int _number);

    private:
        std::string customer;
        int number;
};

#endif