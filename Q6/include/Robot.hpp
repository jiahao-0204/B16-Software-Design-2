#ifndef _ROBOT_HPP_
#define _ROBOT_HPP_

#include "Storage.hpp"
#include "Vehicle.hpp"

class Robot: public Storage, Vehicle {
    public:
        Robot(std::string _label, int _capacity, Map & _map, std::string _home_location);


        void start_delivery();

        void extract_destination_list();

        void plan_path();

        void execute_path();
        
        void deliver_basket(std::string _basket_label);

    private:
        std::string label;

        std::vector<std::string>::iterator it;
        std::vector<std::string> destination_list;
        std::vector<std::string> path_list;
};

#endif