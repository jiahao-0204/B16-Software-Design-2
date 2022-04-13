#include <iostream>
#include <string>

#include "Vehicle.hpp"


Vehicle::Vehicle(Map & _map, std::string _home_location) : map(_map), home_location(_home_location) {};
    

bool Vehicle::go_to(std::string _target_location) {
    // go to adjacent location
    bool reachable = map.check_connectivity(current_location, _target_location);

    // go to by changing current position
    if (reachable) {
        current_location = _target_location;
        std::cout << "arrived at: " << current_location << std::endl;
    } else {
        std::cout << "destination not reachable" << std::endl;
    }

    return reachable;

};