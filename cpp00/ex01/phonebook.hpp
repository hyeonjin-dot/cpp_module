
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    //int         len=1;
public:
    void    add();
    //void    reserch();
    void    print_all();
    void    print_info();
    std::string add_spot(std::string str);
};

#endif