#ifndef _MAP_HPP_
#define _MAP_HPP_


#include <vector>
#include <memory>

#include "Node.hpp"

class Map {
    // stores the connectivity between nodes
    public:
        void addNode(Node & new_node);
        
        bool check_connectivity(std::string location_A, std::string location_B);

    private:

        std::vector< Node * > node_list ; 
};


#endif