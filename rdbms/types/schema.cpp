#include <iostream>
#include <table.hpp>
#include <rSchema.hpp>
#include <../util/tuple.hpp>

class schema {
    private:
        std::set<rSchema> rSchemaSet;

    public:
        schema () {
            
        }

        schema(std::set<rSchema> rsSet) {
            rSchemaSet = rsSet;
        }

        void add_rSchema(rSchema rs) {
            rSchemaSet.insert(rs);            
        }

        void remove_rSchema(std::string name) {
            //TODO
        }

        std::set<rSchema> get_rSchemaSet() {
            return rSchemaSet;
        }

        std::string toString() {
            std::string info;
            for (auto rs : rSchemaSet) {
                info += rs.get_name() + "\n" 
                        + rs.get_attributes().toString() + "\n\n";
            }
            return info;
        }        
};