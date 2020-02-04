#include "../util/tuple.hpp"
#include <iostream>

class rSchema {
    private:
        std::string name;
        tuple attributes;

    public:
        rSchema(std::string rsName, tuple rsAttribs);

        std::string get_name();
        
        tuple get_attributes();
};