## RDBMS

RDBMS is Implementation of Relational database management system which is the first assignment on the course neural-symbolic.

It is a data base managment system that store structured data using tables(rows and columns);

  

## Tables as Relations

A relational data model using n-ary relation to store data

    R = {(a1,...,an) | a1 E A1 ,a2 E A2, ...,an E An}

 ##### where 
 

 - A table is a relation
 - Rows are n-tuples
 - Columns/Atributes comes from a defined set called Domain

##### Each attribute requires a unique identifier/name

  

## Relational Schema and Relational instance
A relational Schema contains the table name and it's atribute name.

A relational instance is a set of finite tuples created with a predefined schema.
Look at the example below,it is the relational schema where table name is student and Name,Age and Department are Attributes.

  

|     | Students |  |
----------|-------|------
|Name |Age |Department |

Based on this relational Schema we can create a table that of students info.

  

Name | Age |Department
-------|------|--------
| Kirubel |24 |CompEng |
| Bemehiret |23 |SoftEng |
| Debora |23 |CompEng |
| Elias |25 |ElecEng |

  

## Query Operations on RDBMS
We have six operations on the tables

1. **Union** : It is a relation between two tables where the resulting table will contain the information of both tables.

It is denoted by:

    R1 U R2 = {(a1,...,an) | (a1,...,an) E R1 V (a1,..,an) E R1}

> Note both the tables must have the same relational schema i.e. Attributes must match .

  

2. **Intersection** : It is a relation between two tables where the resulting table will contain information duplicated in both tables.

It is denoted by:


    R1 n R2 = {(a1,...,an) | (a1,..,an) E R1 & (a1,..,an) E R2 }

  

>Note both the tables must have the same relational schema ie. Attributes must match .

  

3. **Difference** : It is a relation between two tables where the resulting table will contain the information of the first table with out information in second table.

It is denoted by:

    R1 - R2 = {(a1,...,an) | (a1,..,an) E R1 & ~((a1,..,an) E R2)}

>Note both the tables must have the same relational schema ie. Attributes must match .

  

4. **Projection** : It is a relation created with the attributes provided by the user, the resulting table will give the data with in the provided attributes.

It is denoted by:

    Pi(A1,A2,......,An) R1 = {(a1,.....,an)| (b1,....,bn) E R1 ^ (a1 = b1,....am = bm)}

>Note the attributes given by the user should be found in the relation

5. **Selection** : It is a relation created with the attributes provided by the user and some additional criteria, the resulting table will give the data with in the attributes that fulfill the given criteria.

It is denoted by:

    Tproposition (R1) = {(a1,a2,......an)|(a1,a2,.....an) E R1 ^ (proposition)}

>Note the attributes given by the user should be found in the relation

6. **Natural join** : It is a relation between two tables where the resulting table will contain data based on the common columns of the two tables that are being joined.

It is denoted by:

    R1 |X| R2 = Pi(a1,a2,...an)|(a1,a2,.....an) E R1 ^ (a1,a2,.....an) E R2 ^ (T R1.A1 = R2.A2 = ...= Rn.An)

Note the two relations should have common attributes


## Commands for the User Interface

The following commands are supported to use the RDBMS from command line

 1. Create a relational schema with the specified name and attributes list
    >```create,rschema,<rschema name>,<list of column names>```

    >e.g: ```create,rschema,Student,Name,Age```    
    where ```Student``` is rschema name and ```Name,Age``` is list of column names.
2. Create an empty table with a given table name and table specification (i.e. relational schema)
    >```create,table,<table name>,<name of rschema>```

    >e.g: ```create,table,Attendance,Student```    
    where ```Attendance``` is the table name and ```Student``` is the name of the relational schema instance to use as specification for the table.
3. Insert a row into an existing table
    >```insert,<table name>,<row to insert>```

    >e.g: ```insert,Attendance,Kirub,25```    
    where ```Attendance``` is the table name to insert into and ```Kirub,25``` is the data to be inserted into the Attendance table.
4. Display data stored in a table
    >```display,<table name>```

    >e.g: ```display,Attendance```    
    where ```Attendance``` is name of the table to be displayed.
5. Remove a row of data from a table
    >```remove,row,<table name>,<row to remove>```

    >e.g: ```remove,row,Attendance,Kirub,25```    
    where ```Attendance``` is name of the table and ```Kirub,25``` is the data to be removed.
6. Remove or delete an existing table
    >```remove,table,<table name>```

    >e.g: ```remove,Attendance```    
    where ```Attendance``` is name of the table to be removed or deleted.
7. Union of two tables
    >```union,<first table name>,<second table name>```

    >e.g: ```union,Attendance,Grade```    
    where ```Attendance``` is name of the first table and ```Grade``` is name of the second table.    
8. Intersection of two tables
    >```intersection,<first table name>,<second table name>```

    >e.g: ```intersection,Attendance,Grade```    
    where ```Attendance``` is name of the first table and ```Grade``` is name of the second table. 
9. Difference of two tables
    >```difference,<first table name>,<second table name>```

    >e.g: ```difference,Attendance,Grade```    
    where ```Attendance``` is name of the first table and ```Grade``` is name of the second table
10. Projection of a table on to a list of attributes (i.e. columns)
    >```projection,<table name>,<list of column names>```

    >e.g: ```projection,Attendance,Name```    
    where ```Attendance``` is the table name and ```Name``` is columns list with single column names.
    
    _More column names can be specified in the columns list_
11. Select a row from a table with a given value for a column
    >```select,<table name>,<column name>,<value>```

    >e.g: ```select,Attendance,Age,25```    
    where ```Attendance``` is name of the table to select from, ```Age``` is the column used for selection and ```25``` is the value at the selection column.
12. Natural Join of the two tables
    >```Njoin,<first table name>,<second table name>,<attrib from first table>,<attrib from second table>```

    >e.g: ```Njoin,Attendance,Grade,Name,Age```    
    where ```Attendance``` is name of the first table, ```Grade``` is name of the second table, ```Name``` is the joining attribute of the first table and ```Age``` is the joining attribute of the second table.
13. Clear screen
    >```cls```
14. Exit the program
    >```exit```

## Building and Installing

Perform the following steps at the shell prompt:
> ```cd /to/project/root_dir```

> ```mkdir build```

> ```cd build```

> ```cmake ..```

> ```make -j```

> ```sudo make install``` *# install in /usr/local*

> ```make DESTDIR=/installation/path/ install``` *# install in user defined directory. e.g: ~/Desktop/rdbms*
