#include "Store.hpp"
#include "Customer.hpp"
#include "Order.hpp"
#include "Map.hpp"


int main() {
    
    Store store1("store1", 0, 0);
    
    Customer customer1("customer1", 1, 1, 2);

    Map Oxford;
    Oxford.addNode(store1);
    Oxford.addNode(customer1);


    Order order1("customer1", 1);

    store1.add_order(order1);

    


    return 0;
}