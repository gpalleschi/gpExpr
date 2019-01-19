== About gpExpr

gpExpr is a C library providing some funcionalities to parse and execute simple expressions.

gpExpr is developed by mailto:[gpsoftskyballs@gmail.com]

== Version History

* *version 1.0 - (Sep 2018)*	
** First version

== Functions and Usage 


Syntax is :

[function name](arg1,arg2,arg3,...,argN)

If an argument is a variable will be preceded by character ':'.

For example :

[CONVDATE](:CAMPO01,YYYYMMDD,DD-MM-YYYY)

Function actually implemented :

* [CONVDATE] : Permit to convert a string from a format date to other
* [SUBSTR]   : Permit to extract a substring from a String
* [CONCAT]   : Permit to concatenate more strings each other

== License

gpExpr can be distributed, modified and used under the terms of GNU General Public License. 

Giovanni Palleschi
mailto:gpsoftskyballs@gmail.com 
