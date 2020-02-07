#include "tuples.hpp"
#include <iostream>

class rSchema {
    private:
        std::string name;
        tuples attributes;

    public:
        rSchema();

        rSchema(std::string rsName, tuples rsAttribs);

        std::string get_name();

        tuples get_attributes();
};
