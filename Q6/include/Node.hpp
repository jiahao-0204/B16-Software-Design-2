#ifndef _NODE_HPP_
#define _NODE_HPP_


#include <string>


class Node {
    protected:
        Node(std::string _name, double _x, double _y);

    private:
        std::string name;
        double x;
        double y;
};


#endif