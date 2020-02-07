#include "rSchema.hpp"
#include "table.hpp"
#include "tuples.hpp"
#include <iostream>

class schema {
    private:
        std::set<rSchema> rSchemaSet;

    public:
        schema ();

        schema(std::set<rSchema> rsSet);

        void add_rSchema(rSchema rs);

        void remove_rSchema(std::string name);

        std::set<rSchema> get_rSchemaSet();

        std::string toString();
};
