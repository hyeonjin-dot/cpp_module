#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <string>
#include <cmath>

class Scalar
{
private:
    const std::string input;
public:
    //Scalar();
    Scalar(std::string &tmp);
   // Scalar(const Scalar &tmp);
    ~Scalar();

    std::string const &returnValue() const;
    char intoChar() const;
    int intoInt() const;
    float intoFloat() const;
    double intoDouble() const;

   // Scalar &operator=(const Scalar &tmp);

    class Impossible : public std::exception 
    { 
        public: 
            virtual const char* what() const throw();//
    };
    class Nondisplay : public std::exception 
    { 
        public: 
            virtual const char* what() const throw();//
    };
};

std::ostream &operator<<(std::ostream& os, const Scalar &tmp);

#endif