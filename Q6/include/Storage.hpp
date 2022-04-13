#ifndef _STORAGE_HPP_
#define _STORAGE_HPP_


#include <memory> // for unique_ptr 
#include <map>


#include "Basket.hpp"

class Storage {

    public:       
        Storage(int _capacity); 
        
        void add(std::unique_ptr<Basket> & _basket); 
        std::unique_ptr<Basket> take(std::string _label); 
        

    private:
        int capacity; 
    
    protected:
        std::map< std::string, std::unique_ptr<Basket> >::iterator it;
        std::map< std::string, std::unique_ptr<Basket> > basket_list;

};


#endif