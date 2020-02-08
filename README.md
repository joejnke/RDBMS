## RDBMS

RDBMS is Implementation of Relational database management system which is the first assignment on the course neural-symbolic.

It is a data base managment system that store structured data using tables(rows and columns);

  

## Tables as Relations

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

  

## Query Operations on RDBMS
We have six operations on the tables

1. Union -> It is a relation between two tables where the resulting table will contain the information of both tables.

It is denoted by:

R1 U R2 = $\ \bigg \{(a1,...,an) \bigg | (a1,..,an) \in R1 \vee (a1,..,an) \in R1 \bigg \}$

> Note both the tables must have the same relational schema ie. Attributes must match .

  

2. Intersection -> It is a relation between two tables where the resulting table will contain information duplicated in both tables.

It is denoted by

R1 n R2 = $\ \bigg \{(a1,...,an) \bigg | (a1,..,an) \in R1 \wedge (a1,..,an) \in R1 \bigg \}$

  

>Note both the tables must have the same relational schema ie. Attributes must match .

  

3. Difference -> It is a relation between two tables where the resulting table will contain the information of the first table with out information in second table.

It is denoted by

  

R1 - R2 = $\ \bigg \{(a1,...,an) \bigg | (a1,..,an) \in R1 \wedge \neg (a1,..,an) \in R1 \bigg \}$

>Note both the tables must have the same relational schema ie. Attributes must match .

  

4. Projection

5. Selection

6. Natural_join
	