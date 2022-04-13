#include "Robot.hpp"

Robot::Robot(std::string _label, int _capacity, Map & _map, std::string _home_location) 
    : label(_label), Storage(_capacity), Vehicle(_map, _home_location) {};

void Robot::extract_destination_list() {

    for (Storage::it = basket_list.begin(); Storage::it != basket_list.end(); Storage::it++){
        destination_list.push_back(Storage::it->first);
    };
};

void Robot::plan_path() {
    // A. simple path planning
    path_list = destination_list;


    // todo B. complete path planning 
    // generate list of nodes that the robot has to visit, 
    // this includes both customer nodes and landmark node
};


void Robot::execute_path() {
    for (Robot::it = path_list.begin(); Robot::it != path_list.end(); Robot::it++){

        bool success = go_to(*it);

        if (~success) {
            break;
        };
    };
};

void Robot::deliver_basket(std::string _basket_label) {
    
};