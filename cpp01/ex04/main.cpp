#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string rename(std::string name, std::string s1, std::string s2)
{
    int len = s1.length();
    int idx = name.find(s1);
    int i = 0;
    std::string tmp;
    tmp = name.substr(0, idx);
    tmp = tmp + s2;
    tmp = tmp + name.substr(idx + len, name.length());
    return (tmp);
}

int main(int argc, char *argv[])
{   
    if (argc != 4 || std::strlen(argv[2]) == 0)
	{
		std::cout << "usage: ./replace filename string_to_find string_to_replace" << std::endl;
		return (1);
	}

    std::string	out_name = argv[1];

	out_name.append(".replace");

	std::ifstream	ifs;

	ifs.open(argv[1]);
    if (ifs.fail())
    {
        std::cout << "fail to open" << std::endl;
		return (1);
    }

    std::ofstream ofs;
    ofs.open(out_name);

    if (ofs.fail())
    {
        std::cout << "fail to open" << std::endl;
		return (1);
    }

    std::string name;
    int idx = 0;
    while (true)
    {
        std::getline(ifs, name);
        std::cout << name << std::endl;
        idx = name.find(argv[2]);
        if (idx >= 0)
            name = rename(name, argv[2], argv[3]);
        ofs << name;
        if (ifs.eof())
			break ;
        ofs << std::endl;
    }
    ifs.close();
	ofs.close();
    return (0);
}