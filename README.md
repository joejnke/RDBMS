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
    >```create rschema <rschema name> <list of column names>```

    >e.g: ```create rschema ID Name ID-num```    
    where ```ID``` is rschema name and ```Name,ID-num``` is list of column names.
        
    **more examples**:
        
        create rschema Attendance ID-num Number-of-present
        create rschema Contact Name Email
        create rschema Grade ID-num Points

2. Create an empty table with a given table name and table specification (i.e. relational schema)
    >```create table <table name> <name of rschema>```

    >e.g: ```create table Student ID```    
    where ```Student``` is the table name and ```ID``` is the name of the relational schema instance to use as specification for the table.
            
    **more examples**:
        
        create table Training-attendance Attendance
        create table Training-grade Grade
        create table Students-contact Contact
        create table Team-leader ID

3. Insert a row into an existing table
    >```insert <table name> <row to insert>```

    >e.g: ```insert Student Kirub G1T31```    
    where ```Student``` is the table name to insert into and ```Kirub,G1T31``` is the data to be inserted into the Attendance table.    
    
    **more examples**:
                
        insert Student Elias G1T32 
        insert Student Bemhreth G1T33
        insert Student Dibora G1T34
        
        insert Training-attendance G1T31 4 
        insert Training-attendance G1T32 5 
        insert Training-attendance G1T33 6
        insert Training-attendance G1T34 5
        
        insert Training-grade G1T31 18.5 
        insert Training-grade G1T32 19.5
        insert Training-grade G1T33 19
        insert Training-grade G1T34 20

        insert Students-contact Kirub joejnke@gmail.com 
        insert Students-contact Elias tsegawelias@gmail.com
        insert Students-contact Bemhreth bemhretgezahegn@gmail.com
        insert Students-contact Dibora deborahaile3@gmail.com

        insert Team-leader Elias G1T32
        insert Team-leader Arsema G4T34
        insert Team-leader Brook G2T33

4. Display data stored in a table
    >```display <table name>```

    >e.g: ```display Student```    
    where ```Student``` is name of the table to be displayed.

    *Output*:
    
        ID
        ( Name ID-num )
        ( Bemhreth G1T33 )
        ( Dibora G1T34 )
        ( Elias G1T32 )
        ( Kirub G1T31 )
                
    **more examples**:
        
        display Training-attendance
        display Training-grade
        display Students-contact

    *Outputs with the above command order*:

        Attendance
        ( ID-num Number-of-present )
        ( G1T31 4 )
        ( G1T32 5 )
        ( G1T33 6 )
        ( G1T34 5 )

        Grade
        ( ID-num Points )
        ( G1T31 18.5 )
        ( G1T32 19.5 )
        ( G1T33 19 )
        ( G1T34 20 )

        Contact
        ( Name Email )
        ( Bemhreth bemhretgezahegn@gmail.com )
        ( Dibora deborahaile3@gmail.com )
        ( Elias tsegawelias@gmail.com )
        ( Kirub joejnke@gmail.com )

5. Remove a row of data from a table
    >```remove row <table name> <row to remove>```

    >e.g: ```remove row Student Kirub G1T31```    
    where ```Student``` is name of the table and ```Kirub,25``` is the data to be removed.
6. Remove or delete an existing table
    >```remove table <table name>```

    >e.g: ```remove table Student```    
    where ```Student``` is name of the table to be removed or deleted.

    > Note: recreate the "Student" table since we need it later.
    
        create table Student ID
        insert Student Kirub G1T31                
        insert Student Elias G1T32 
        insert Student Bemhreth G1T33
        insert Student Dibora G1T34
        
7. Union of two tables
    >```union <first table name> <second table name>```

    >e.g: ```union Student Team-leader```    
    where ```Student``` is name of the first table and ```Students-contact``` is name of the second table.

    *Output:*

        ( )
        ( Arsema G4T34 )
        ( Bemhreth G1T33 )
        ( Brook G2T33 )
        ( Dibora G1T34 )
        ( Elias G1T32 )
        ( Kirub G1T31 )

8. Intersection of two tables
    >```intersect <first table name> <second table name>```

    >e.g: ```intersect Student Team-leader```    
    where ```Student``` is name of the first table and ```Team-leader``` is name of the second table. 

    *Output:*

        ( )
        ( Elias G1T32 )

9. Difference of two tables
    >```difference <first table name> <second table name>```

    >e.g: ```difference Student Team-leader```    
    where ```Student``` is name of the first table and ```Team-leader``` is name of the second table

    *Output:*

        ( )
        ( Bemhreth G1T33 )
        ( Dibora G1T34 )
        ( Elias G1T32 )
        ( Kirub G1T31 )

10. Projection of a table on to a list of attributes (i.e. columns)
    >```project <table name> <list of column names>```

    >e.g: ```project Students-contact Email```    
    where ```Students-contact``` is the table name and ```Email``` is columns list with single column names.
    
    *Output:*

        ( )
        ( bemhretgezahegn@gmail.com )
        ( deborahaile3@gmail.com )
        ( joejnke@gmail.com )
        ( tsegawelias@gmail.com )

    _More column names can be specified in the columns list_
11. Select a row from a table with a given value for a column
    >```select <table name> <column name> <value>```

    >e.g: ```select,Training-grade,ID-num,G1T32```    
    where ```Training-grade``` is name of the table to select from, ```ID-num``` is the column used for selection and ```G1T32``` is the value at the selection column.

    *Output:*

        ( )
        ( G1T32 19.5 )

12. Natural Join of two tables
    >```njoin <table1 name> <table2 name> <comp1> <comp2> <joining atribute from the 1st table> <joining atribute from the second table>```

    >e.g: ```Njoin Student Training-attendance ID-num ID-num Name Number-of-present```    
    
    where: 

        "Student" is name of the first table, "Training-attendance" is name of the second table, 
        "ID-num" is the attribute from the first table which we will use to compare it to the second table,
        "ID-num" is the attribute from the second table,which we will use to compare it to the first table,
        "Name" is the joining attribute of the first table and
        "Number-of-present" is the joining attribute of the second table.

    *Output:*
    
        ( )
        ( Bemhreth 6 )
        ( Dibora 5 )
        ( Elias 5 )
        ( Kirub 4 )

13. Display all relational schemas and meta data of the tables in the database.
    >```database```

    *Output:*

        Relational Schemas:
        ===================
        Attendance
        ( ID-num Number-of-present )

        Contact
        ( Name Email )

        Grade
        ( ID-num Points )

        ID
        ( Name ID-num )


        Tables:
        =======
        Student
        ID
        ( Name ID-num )

        Students-contact
        Contact
        ( Name Email )

        Team-leader
        ID
        ( Name ID-num )

        Training-attendance
        Attendance
        ( ID-num Number-of-present )

        Training-grade
        Grade
        ( ID-num Points )          
 
14. Clear screen
    >```cls```
15. Exit the program
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
