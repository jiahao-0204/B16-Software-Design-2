/** 
 * * Q4
 * ? Write a function template that implements a binary search of a sorted array of objects.
 * 
 * ? (a) (Optional) Sketch how binary search works and describe the algorithm.
 * 
 * ? (b) Write a program that calls your templated function with an array of objects of your choice.
 * 
 * ? (c) Test the output of your program to verify your answer.
 * 
 */


#include <iostream>
#include <string>


template <class T> 
int binary_search(T array[], T num, int l, int h) {

    if (l <= h) { 

        int m = (l + h)/2; // integer division always round down -> floor

        // recursive call
        if (num == array[m]){return m;}
        if (num >  array[m]){return binary_search<T>(array, num, m+1, h);}
        if (num <  array[m]){return binary_search<T>(array, num, l, m-1);}
    };

    // element not found when l > h
    return -1;
}


int main(){
    
    typedef int T;
    int array[] = {1, 2, 4, 5, 6, 10};

    // first element 
    std::cout << "first element -> 0" << std::endl;
    std::cout << binary_search<T>(array, 1, 0, 5) << std::endl;

    // last element
    std::cout << "last element -> 5" << std::endl;
    std::cout << binary_search<T>(array, 10, 0, 5) << std::endl;

    // missing element
    std::cout << "missing element -> -1" << std::endl;
    std::cout << binary_search<T>(array, -10, 0, 5) << std::endl; // negative value
    std::cout << binary_search<T>(array, 0, 0, 5) << std::endl; // zero value
    std::cout << binary_search<T>(array, 7, 0, 5) << std::endl; // inbound value
    std::cout << binary_search<T>(array, 20, 0, 5) << std::endl; // outbound value

}