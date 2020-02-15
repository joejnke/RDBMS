## RDBMS
RDBMS
=========

RDBMS is Implementation of Relational database management system which is the first assignment on the course neural-symbolic.

It is a data base managment system that store structured data using tables(rows and columns);



## Tables as Relations
Tables as Relations
========================

A relational data model using n-ary relation to store data

    R = $\ \bigg \{(a1,...,an) \bigg | a1 \in A1 ,a2 \in A2, ...,an \in An \bigg \}$

 ##### where 
##### where 


 - A table is a relation
@@ -48,7 +49,8 @@ Name | Age |Department



## Query Operations on RDBMS
Query Operations on RDBMS
==============================
We have six operations on the tables

1. Union -> It is a relation between two tables where the resulting table will contain the information of both tables.
@@ -89,4 +91,50 @@ It is denoted by:
5. Selection

6. Natural_join




Commands for the Interface
===============================

The following commands are supported to use the RDBMS from command line

1. ### create rschema "name" "attributes" 
    creates a relational schema with the specified name and attributes list
2. ### create table "rschema name" "table name"
    creates a table with the specified table name from the specified relational schema
3. ### insert "table name" "rows of data"
    inserts a row in the table specified with the table name
4. ### exit 
    exits the interface
5. ### remove table "table name"
    remove the table sepecified with table name
6. ### remove row "table name" "data to be removed"
    removes a specific data from the table specified by the table name
7. ### display "table name"
    displayes data stored in the table 
8. ### union "table1 name" "table2 name"
    performs the union of the two tables specifed
9. ### intersection "table1 name" "table2 name"
    performs the intersection of the two tables specifed
10. ### difference "table1 name" "table2 name"
    performs the difference of the two tables specifed
11. ### projection "table name" "attribute"
    performs the projection of the table specifed by the table name on the attributes list
12. ### select "table1 name" "table2 name"
    performs the selection of the two table specifed
13. ### Njoin "table1 name" "table2 name"
    performs the natural Join of the two tables specifed                                  

Building and Installing
=======================	

Perform the following steps at the shell prompt:
```
    cd to project root dir
    mkdir build
    cd build
    cmake ..
    make -j
    sudo make install
```
