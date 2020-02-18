RDBMS
=========

RDBMS is Implementation of Relational database management system which is the first assignment on the course neural-symbolic.

It is a data base managment system that store structured data using tables(rows and columns);

  

Tables as Relations
========================

A relational data model using n-ary relation to store data

    R = $\ \bigg \{(a1,...,an) \bigg | a1 \in A1 ,a2 \in A2, ...,an \in An \bigg \}$
##### where 
 

 - A table is a relation
 - Rows are n-tuples
 - Columns/Atributes comes from a defined set called Domain

##### Each attribute requires a uniqu identifier/name

  

## Relational Schima and Relational instance
A relational Schima contains the table name and it's atribute name.

A relational instance is a set of finite tuples created with a predefined schema.
Look at the example below,it is the relational schima where table name is student and Name,Age and Department are Attributes.

  

|     | Students |  |
----------|-------|------
|Name |Age |Department |

Based on this relational Schima we can create a table that of students info.

  

Name | Age |Department
-------|------|--------
| Kirubel |24 |CompEng |
| Bemehiret |23 |SoftEng |
| Debora |23 |CompEng |
| Elias |25 |ElecEng |

  

Query Operations on RDBMS
==============================
We have six operations on the tables

1. Union -> It is a relation between two tables where the resulting table will contain the information of both tables.

It is denoted by:

    R1 U R2 = $\ \bigg \{(a1,...,an) \bigg | (a1,..,an) \in R1 \vee (a1,..,an) \in R1 \bigg \}$

> Note both the tables must have the same relational schema ie. Attributes must match .

  

2. Intersection -> It is a relation between two tables where the resulting table will contain information duplicated in both tables.

It is denoted by:


    R1 n R2 = $\ \bigg \{(a1,...,an) \bigg | (a1,..,an) \in R1 \wedge (a1,..,an) \in R1 \bigg \}$

  

>Note both the tables must have the same relational schema ie. Attributes must match .

  

3. Difference -> It is a relation between two tables where the resulting table will contain the information of the first table with out information in second table.

It is denoted by:

    R1 - R2 = $\ \bigg \{(a1,...,an) \bigg | (a1,..,an) \in R1 \wedge \neg (a1,..,an) \in R1 \bigg \}$

>Note both the tables must have the same relational schema ie. Attributes must match .

  

4. Projection

5. Selection

6. Natural_join



Commands for the Interface
============================

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
