#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array
{
private:
    T *array;
    unsigned int size;
public:
    Array(): array(new T[0]), size(0){};
    Array(unsigned int n) : array(new T[n]), size(n){};
    Array(Array const &tmp)
    {
        size = tmp.size;
        array = new T[size];
        for (unsigned int i = 0; i < size; i++)
            array[i] = tmp.array[i];
    };
    ~Array()
    {
        delete [] array;
    };

    Array& operator=(const Array& tmp)
    {
        if (this == &tmp)
            return (*this);
        if (size != tmp.size)
        {
            if (array)
                this->~Array();
            size = tmp.size;
            array = new T[size];
        }
        for (unsigned int i = 0; i < size; i++)
        {
            array[i] = tmp.array[i];
        }
        return (*this);
    }

    unsigned int return_size() const 
    {
        return size;
    };

    T &operator[](unsigned int i)
    {
        if (i < 0 || i >= static_cast<unsigned int>(this->return_size()))
            throw IndexError();
        else
            return (array[i]);
    }

    class IndexError : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Error: This element is out of the limits!";
		}
	};
};


#endif