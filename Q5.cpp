/** 
 * * Q5. Design patterns and interfaces
 * A class Minimiser is a class for finding the minimum of a real-valued, 
 * univariate function f(x) (using a particular minimisation algorithm 
 * e.g. Newton-Raphson). Its public interface is defined as follows:
 * 
 * The user supplies a class derived from the base class Func which can 
 * compute the value of the function at a point, and possibly its derivative 
 * at that point. The constructor first checks if the function can compute 
 * the derivative, and then 􏰁nds the local minimum, starting from the x 
 * value startX (don't concern yourself with the details of this algorithm, 
 * other than to note that it must either use the user-supplied derivatives 
 * or compute them numerically).
 * 
 * 
 * ? (a) Design the interface for the base class Func.
 * 
 * 
 * ? (b) Write the skeleton of a class for the function e^x/x^2 and describe 
 * ? the implementation steps required to 􏰁nd the minimum of the function using 
 * ? the Minimiser class.
 * 
 */


#include <math.h>

/** 
 * base class for any function
 * 
 * 1. must have function evaluation
 * 2. but doesn't necessarily have derivative
 */
class Func {
    public:
        virtual double function(double x) const;
};




/** 
 * FUNCTION e^x / x^2
 */
class ex_x2 : Func {
    
    public:

        // function = e^x / x^2 
        double function(double x) const { return exp(x) / pow(x, 2); };

        // derivative = e^x(x-2) / x^3
        double derivative(double x) const { return exp(x) * (x - 2) / pow(x, 3); };

};


class Minimiser {
    public:

        Minimiser(const Func & f, const double startX) : _f(f), _startX(startX) {
            // PROCEDURE 

            /** 
             * 1. check if derivative exists
             */
            
            /**
             * 2. find x where derivative is zero, using 
             * EITHER derivative function available 
             * OR numerical approximation 
             * 
             * by iteratively increment x, then evaluate?
             */

            /** 
             * 3. store value of x and value of derivative
             */
        };
        
        double Minimum() const { return _minimum; };
        double MinimumLocation() const { return _minimumX; };
        
    private:
    
        Func _f;
        double _startX;
        double _minimum;
        double _minimumX;
};