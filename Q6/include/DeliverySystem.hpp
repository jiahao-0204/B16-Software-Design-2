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




/**
 * unique_ptr - represents ownership, the physical item is stored somewhere
 * 
 * https://www.quora.com/When-should-I-not-use-smart-pointers-in-C++-provided-Im-not-writing-a-library
 */