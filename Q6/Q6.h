/** 
 * * 6. C++ Project: 
 * Our local Oxford green grocer is implementing a fully automated robot 
 * delivery system. An autonomous ground vehicle is tasked with delivering 
 * baskets to house doors. You are tasked with building a system that will 
 * plan and coordinate this operation.
 * 
 * There are 10 customers that are subscribed to this service and the robot 
 * can carry tree baskets at a time. No customer can order more that 2 baskets.
 * 
 * ==========================================================================
 * 
 * (a) Design the set of classes to represent the location of the store and 
 * customers. Remember our running example of the `Topological Map' that we 
 * used in class.
 * 
 * i. Initialize the connectivity between the nodes and the distances between 
 * them at random. Assume no distance between two nodes is larger than 1km.
 * 
 * ii. Make sure all locations (nodes) are connected to the store but not 
 * all houses are directly accessible from the store.
 * 
 * ==========================================================================
 * 
 * (b) Create a pipeline that generates a list of random customer orders and 
 * show how your system will proceed to complete the delivery tasks (delivery 
 * plan). You can think of this as deliveries per day.
 * 
 * i. Write an algorithm that computes the shortest path between the store 
 * and customers' houses.
 * 
 * ii. Write a function that processes orders and computes the delivery plan. 
 * Note that in some cases you would be able to complete multiple deliveries 
 * with a single run.
 * 
 * iii. Create appropriate output that shows the planned routes and deliveries.
 * 
 * ==========================================================================
 * 
 * (c) Consider how your system can be extended to accommodate multiple robots 
 * of varying basket capacities.
 * 
 * ==========================================================================
 * 
 * Hints: Use source control to document your progress from an empty repository 
 * to the full system. Use an appropriate project structure that separates 
 * interfaces and implementation, and source from build space. Document your 
 * classes in source and use and automagically generate the projects documentation. 
 * Make heavy use of STL in all steps of your code development. Last, as always, 
 * write clean, easy to read and reusable code. Happy coding!
 * 
 */



#include <vector>
#include <map>

#include <string>
#include <memory>


class Item {
    public:
        Item(std::string _label);

        std::string get_label();
    private:
        std::string label;
};


class Storage {

    protected:       
        Storage(int _capacity); 

        void add(std::unique_ptr<Item> & _item); 
        std::unique_ptr<Item> & take(std::string _label); 

    private:
        int capacity; 
        
        std::map< std::string, std::unique_ptr<Item> > item_list;
        // the naming or id for retrieval
        // the physical item, thus unique pointer
};



class Node {
    protected:
        Node(std::string _name, double _x, double _y);

    private:
        std::string name;
        double x;
        double y;
};



class Robot: Storage {
    public:
    private:
};



class Store : Node, Storage {
    public: 
        Store(std::string _name, double _x, double _y, int _capacity);
    private:
        std::vector< std::unique_ptr<Robot> > robot_list;
};

class Customer : Node, Storage {
    public: 
        Customer(std::string _name, double _x, double _y, int _capacity, int _num_ordered);
    private: 
        int num_ordered;
};

class Landmark : Node {
    public: 
        Landmark(std::string _name, double _x, double _y);
    private:
};






class Basket : Item {
    public: 
        Basket(std::string _label, std::weak_ptr<Customer> _destiny);

        std::weak_ptr<Customer> get_destiny();
    private: 
        std::weak_ptr<Customer> destiny;
};




class Map {
    public:
        void addNode() {

        };
    private:

        // a node can only appear in one map, but the address of node is 
        // shared across many things
        std::vector< std::shared_ptr<Node> > node_list ; 
};







