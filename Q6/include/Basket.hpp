#ifndef _BASKET_HPP_
#define _BASKET_HPP_

#include <string>

class Basket{
    public: 
        Basket(std::string _label, std::string _destination);

        std::string get_label();
        std::string get_destination();
    private: 

        std::string label;
        std::string destination;
};


#endif // _BASKET_H_