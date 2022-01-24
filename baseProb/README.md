# Some header and thier functionality
- To identify the type of any variable
	- ```#include <typeinfo>``` header is used
	- ```typeid(varname).name()``` by using this format we can identify type
- For setting precision 
	-```#includ <iomanip>``` header is used
	- ```setprecision(number_for_precision)``` sets the precision after decimal iff fixed is given unless it will count the ciel value too, ```fixed``` a keyword which will forcefully fix the setprecision value
- For swapping
	-```#include <algorithm>``` header is used
	-```swap(num1, num2)``` swaps the number by passing them by refrence.

- For rounding off and floor, ceil value 
	-```#include <cmath>``` header is used
	-```ceil(num)``` will always give the ceil value for the num ( i.e it will return num + 1 value no matter what is after decimal ).
	-```floor(num)``` will always give the floor value no matter what is after decimal.
	-```round(num)``` will normal roundoff the number according to digit >= 5 ( only roundoff to one decimal )