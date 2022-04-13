#ifndef _STORE_HPP_
#define _STORE_HPP_


#include "Node.hpp"
#include "Storage.hpp"
#include "Order.hpp"
#include "Robot.hpp"


class Store : public Node, Storage {
    public: 
        Store(std::string _name, double _x, double _y);

        void add_order(Order _order);

        void process_order();

        void make_basket(std::string _label, std::string _destination);

        void load_basket(std::string basket_label, std::string robot_label);

        void send_robots(std::string robot_label);

    private:
        std::map< std::string, std::unique_ptr<Robot> > robot_list;
        std::vector< Order > order_list;
        
};

#endif