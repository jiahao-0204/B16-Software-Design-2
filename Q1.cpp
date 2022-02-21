/**
 * * Q1. Patterns, Class design and the Standard Template Library
 * 
 * ? (a) Using C++'s Standard Template Library vector class template, define the private 
 * ? data and public interface of an Image class in which each pixel is a single byte (in 
 * ? C++ this is an unsigned char).
 * 
 * ? Hint: the private data will need to store the image data itself and you could either 
 * ? use a vector of vectors of unsigned chars for this, or a single flat vector of unsigned 
 * ? chars; it will also need the height and width of the image; the interface will need 
 * ? methods to get and store pixel data, etc; the constructor should take the height and 
 * ? width as arguments and create the pixel data. 
 * 
 * 
 * ? (b) How could you change your class so that it could store a real number per pixel 
 * ? instead (i.e. double)? 
 * 
 * make a template
 * 
 */


#include <vector>
#include <iostream>


template <class T>
class Image 
{
    /**
     * this feels more like a generic 2D vector
     */

    private:
        std::vector< std::vector<T> > data;

    public:
        Image(int _height, int _width)
        {
            // resize for height
            data.resize(_height);

            // resize for width
            for (size_t i = 0; i < _height; i++) {
                data[i].resize(_width);
            };
        };

        /**
         * operator overloading
         * we can obtain/modify element of Image by calling
         * Image[height][width]
         */
        std::vector<T> & operator[](const int & i)
        {
            return data[i];
        }

};


int main()
{
    Image<unsigned char> I(2, 3);
    I[0][0] = 'a';

    std::cout << I[0][0] << std::endl;

    return 0;

}
