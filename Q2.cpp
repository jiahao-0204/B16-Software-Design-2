/**
 * * Q2
 * 
 * ? What are the main differences between an array and a C++ vector ?
 * 
 * Array:
 * - an array is simply a continuous memory block in either stack or heap.
 * - it allows random access using the [] operation, which essentially is 
 * dereferencing at an offset a[n] == *(a+n)
 * 
 * Vector:
 * - vector is a class provided by the standard template library (STL). 
 * - it improves on the array by providing many functionalities
 * - it is essentially a wrapper for array
 * 
 */


#include <iostream>

int main()
{
    int a[3] = {1, 2, 3};

    int i = 1;

    std::cout << a[i] << std::endl;
    std::cout << *(a+i) << std::endl;

    return 0;
}
