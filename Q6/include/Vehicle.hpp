#ifndef _VEHICLE_HPP_
#define _VEHICLE_HPP_

#include "Node.hpp"
#include "Map.hpp"

class Vehicle {
    protected:
        Vehicle(Map & _map, std::string _home_location);
    
        bool go_to(std::string _target_location);
  
    private:
        Map & map; // uses reference, as Vehicle must be initiated with a Map, and Vehicle does not manage the life-cycle of Map
        std::string home_location;
        std::string current_location;
};

#endif