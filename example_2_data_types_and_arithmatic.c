// PXT102/202 C Programming Language Workshop
// Example  2 - "Data Types"
//
// Demonstrators: Zoltan Sztranyovszky and Michael Norman

/*
 * Notice that for this example we have included four new libraries:
 * <stdlib.h>, <stdbool.h>, <float.h>, and <limits.h>
 * the reasons for these new includes will be discussed as they become 
 * relevant. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 2.1 a). Heap memory vs stack memory:
* 
* As was advertised in the advert for this workshop, C allows you far greater
* control over your computers memories. This comes with the benifits of more
* optimisation and control, but it has the downside of being tricky to deal with
* and prone to errors if not handled directly.
*
* Many languages that you might be more familiar with, such as Python, automatically
* handle memory control, allocation, and garbage collection. In C this is not
* neccisarily the case.
*
* Your computer has two typws of memory, heap memory and stack memory:
*
* Stack memory is automatically managed by your CPU, because the CPU is very good 
* at this, reading and writing to the stack is very fast, however it has a very 
* limited size heaviliy dependant on your evironment but is usually around the order
* of tens of kilobytes to megabytes.
*
* Heap memory is much larger, consisting of all avalible memory on your computing
* system (on most modern systems on the order of multiple gigabytes). It is usefull
* when dealing with large amounts of data.
*
* For now we will focus only on using the stack memory. When declaring variables
* as is seen later in this tutorial memory is automatically asigned to that variable
* on the stack.
*
* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

int main()
{

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.1 b). Variable delcaration, definition, and intilization:
	* 
	* A variable is a memory location that can store a value. There are four types of variable: 
	* basic variables, enumerated variables, void types, and derived types. This tutorial will
	* only cover basic variables.
	*
	* A basic variable is a variable that can store one instance of a given data type.
	*
	* In order to create a variable and give it a value, you must first define and
	* declare that variable so that the compiler knows it exists, and to assign memory
	* for it.
	*
	* A declaration lets the compiler know that a varaible exists somewhere in your code. 
	* You will not need to do this seprately unless are linking multiple C scripts 
	* together, so for now just be aware that whenever a variable is defined
	* in C it is also automatically declared. 
	*
	* A defintion tells it the compiler exactly where it exists and that is should asssign
	* memory for it at this point in the script. As was previously noted it will be allocated 
	* to the stack memory. Similar to functions you must give the varibale a data type and a name
	* in the following syntax:
	*
	* data_type variable_name;
	*
	* As was noted, this syntax will also declare the variable.
	*
	* Initilization defines and declares as well as setting an intial value for the variable. Before
	* a variable is intilised, it will hold whatever value was in the memory at the time it was defined.
	* Essentially random leftover bits from past usage. Initilisation uses the following syntax:
	*
	* data_type variable_name = intial_value;
	*
	* This will define, declare and initilse the variable.
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/	 

	int x;       //<-- Defining (and therefore declaring) a variable named x. Notice
	             // that no value has yet been assigned to this variable.

	x = 10;      //<-- Following its definition we can assign a value to this variable,
			     // initilising it.

	//TODO: maybe talk about lvalues vs rvalues.

	int y = 20;  //<-- Defining and initilising a variable with the value of 20.

	int a, b, c; //<-- We can aslo define multiple variables in one line with this syntax.

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.1 c). Data types
	*
	* A datatype tells the compiler how it should interpret the binary data stored
	* in a given variable's memory location, how operations act on that variable, 
	* and the amount of memory to allocate.
	* 
	* There are a number of data types that come standard with C. Below is a list of
	* some of the more common variables you may wish to utalize, as well as their size 
	* in bytes (i.e) the minimum amount of memory that will be allocated to each, their 
	* minimum and maximum values, and their format specifier (which will be discussed 
	* later.)
	*
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/	 

	//Integer types (Can only store whole numbers):      [Values Between ], Min Size (bits), Format Specifier  
	
	short          		short_variable;             //<--[−32,767, +32,767], 16         , %hi                 
	unsigned short 		unsigned_short_variable;    //<--[0, 65,535]       , 16         , %hu    

	int            		integer_variable;           //<--[−32,767, +32,767], 16         , %i                 
	unsigned int   		unsigned_integer_varaible;  //<--[0, 65,535]       , 16         , %u

	long           		long_variable;              //<--[−2,147,483,647, +2,147,483,647], 32, %li
	unsigned long  		unsigned_long_variable;   	//<--[0, 4,294,967,295]              , 32, %lu

	long long      		long_long_variable;			//<--[−9,223,372,036,854,775,807, +9,223,372,036,854,775,807], 64, %lli 	
	unsigned long long  unsigned_long_long_variable;//<--[0, +18,446,744,073,709,551,615], 64, %lli       

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.1 d). Integers
	*
	* Integers can represent every whole number within their range with complete precision.
	* The numbers shown above are the minimum required ranges and sizes as specified by the C99
	* specification. You may have noticed that the short and integer variable types have the same
	* minimum specification. This is a good example of why we have to be carefull of the compiler
	* and environment we are using.
	*
	* There are a few programtic tools were can use to find the size and range of the file type
	* in an executables current environment. This is why we have imported the <limit.h> library,
	* it gives us acess to the minumum and maximum datatype sizes as varaibles.
	*
	* The sizeof function is included in <stdlib.h>.
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/

	//To find the size (in bytes) of any datatype, use the sizeof function:
	printf("The size of an integer is: %d \n", sizeof(int));

	//To find the limits value of of a datatype use the <limits.h> library:
 	printf("The minimum value of int = %d\n", INT_MIN);
   	printf("The maximum value of int  = %d\n", INT_MAX);

   	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.1 e). Printing variables and format specifiers.
	*
	* The above print statments also illustrate how we can print the value of a variable. 
	* We used the following syntax:
	*
	* printf("Example text: %format_specifier", variable);
	* 
	* The format specifier is dependant on the datatype of the variable you are trying to
	* display. It tells the printf function how to read the inputted variable. If you use
	* the incorrect format specifier it can often lead to the printf function printing
	* either nonsense or the a value but the incorrect value.
	* 
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/

	//Real Floating-Point Types (Can store real decimal numbers): Aprox max value, Aprox Min size (bits), Format Specifier
	float              float_variable;              		//<-- 3.4 × 10^38    , 32                   , %f
	double             double_variable;             		//<-- 1.0 x 10^308   , 64                   , %f
	long double        long_double_variable;                //<-- 1.2 × 10^4932  , 80 - 128             , %Lf

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.1 f). Floating-point types.
	*
	* Floats can be used to hold decimals and have variable precision - depenant on
	* the float size and format, precision will start to degrade once numbers surpass
	* a certain size (or are smaller than a certain size) - the variable will store the 
	* most sigificant figures but loose some figures toward the end of the number. This
	* is why they are called floating point, because the decimal floats.
	*
	* The precision and maxium size of floating point is highly compiler depenant. Again,
	* we can check these programaticaly this time using the <float.h> library constants.
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/	

	printf("The minimum value of float = %.10e\n", FLT_MIN);
  	printf("The smallest sigificant digit represented in a float = %.10e\n", FTL_EPSILON);

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.1 g). Optimisation and data types.
	*
	* In order to optimize code for speed and memory efficiency is is preferable to use
	* the smallest data type that will suit your needs -- this will depend on the maxium
	* precision and values that you need to store.
	*
	* Calculations with smaller sized data types can be considrably faster than with
	* larger data types.
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/	

  	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.1 h). Characters types and strings
	*
	* So far we have only used strings as rvalues - we have not assigned them to a
	* variable. In C, strings are stored as arrays of mutliple character data types.
	* We will cover arrays in more detail in a later tutorial, so for now thing of them
	* as multiple variables stored next to each other in memory.
	* 
	* Characters are really an integer datatype in which each number is mapped to
	* an alphanumeric character. They can store values between 0 and 255. A single
	* character is identified using the single quotation ('') mark compared to the double 
	* quotation mark for strings. 
	*
	* Arrays can be stored on either the heap or the stack. 
	* To initilize a string on the stack use the following syntax:
	* 
	* char string_name[] = "String";
	*
	* This will automatically initilise the string array with enough memory to store
	* all the characters as well as a null character. The null character tells any
	* function reading the string that it has reached the end of the string. In more
	* explicit form the above string could be intililised like this:
	*
	* char string_name[7] = {'S', 't', 'r', 'i', 'n', 'g', '\0'};
	*  
	* Where ('\0') is the null character. When asigning strings in this way, remember
	* to count an extra value for the null pointer.
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/	

	//Characters and strings:

	char character_variable = 'a';                 //<-- Initilizing a character
	
	char this_is_a_string[] = "Hello Cardiff. \n"; //<-- Initilizing a string

	printf(this_is_a_string);                      //<-- Printing a string variable

	//TO DO: String manipualtion functions?

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.1 i). Boolean types
	*
	* Booleans are variables that can only be eithe 1 or 0. These value represent
	* True and False values respectively and can be used in boolean logic.
	*
	* Booleans are not one of the standard C types. If you want to use them they
	* have to be included seprately in the <stdbool.h> library. Even though they
	* can only have a value of 0 or 1, bools are stored in the same manner as char
	* datatype they can have any value between 0-255, any value greater than 0 is 
	* treated as a 1. 
	*
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/		

	bool               boolean = 0;

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.2 a). Arithmetic Operators
	*
	* Now that we have covered the basic data types we can move on to how to use them
	* to perform basic arithmetic. Arithemetic operators are pre-defined syntax that 
	* all C compilers will recongnise and know how to evaluate.
	*
	* Below is a list of all the artithmetic operators present in C, they function as would
	* be expected of them.
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/		

	//TODO trigonometric functions?

	int addition       = 1 + 1;
	printf("The addition result is: %d \n", addition);
	
	int subtraction    = 1 - 1;
	printf("The addition result is: %d \n", subtraction);

	int division       = 3 / 2;
	printf("The division result is: %d \n", division);

	int remainder      = 3 % 2; 
	printf("The remainder result is: %d \n", remainder);

	int multiplication = 2 * 2;
	printf("The multiplication result is: %d \n", multiplication);

	int increment      = 1++;
	printf("The increment result is: %d \n", multiplication);

	int decrement      = 1--;
	printf("The decrement result is: %d \n", multiplication);

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.2 b). Bracketing
	*
	* Just as with standard mathematical formalism, and as it is in python, we 
	* can use brackets to control the order in which the operators act.
	*
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/		

	int brackets    = 2 * ( 1 + 1 );
	int no_brackets = 2 * 1 + 1;

	printf("Bracketed result: %d vs non-bracketed result: %d \n", brackets, no_brackets);

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.2 c). Exponetiation and Arithemtic Functions
	*
	* Some slightly more complex mathematical operations do not have in-built C operators,
	* but instead have functions included with either the <math.h> or <stdlib.h> libraries.
	* Below is an example of how to use this for exponentiation, but there are many other
	* commonly needed functions included in these libraries such as logarithms and trigonometric
	* functions.
	*
	* A note of caution about using the exponetial function when a multiplcation operator would
	* do, in many cases when performing simple exponentiation with integer values, it is more
	* efficient to do this using the multiplication operator than with pow function. You may want
	* to test this to be sure.
	*
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/		

	double power_1 = pow(3, 2); //<-- Using the pow function to exponentiate.
	double power_2 = 3*3;       //<-- Achiving the same result as the pow function.

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.2 d). Integer vs Float division rules
	*
	* When diving two integers with an integer operator C will return an integer 
	* value. If the result would not have been an integer value, C will round
	* the result toward 0.
	*
	* When deviding two floats the result will also be a float a decimal with up
	* to that float's precision.
	*
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/	

	double float_result   = 3.0 / 2.0 
	int    integer_result = 3 / 2

	printf("Float result: %f vs integer result: %d \n", float_result, integer_result);

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.2 e). Type Casting
	*
	* Evidently, sometimes you will want to operate integer data types on float,
	* or vice versa. In order to do this, we will used a technique known as type casting.
	*
	* Casting will tell the compiler to convert from one data type to the other as best
	* as it can. When converting from a float to an integer this will also round toward
	* 0.
	*
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/	

	int a = 12;
	int b = 7;

	double casted_a = (double) a;
	double cast_result = (double) a / (double) b;

	printf("Float result of casted divsion: %f \n", cast_result);

	//TODO Integer promotion?

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.2 f). Rounding
	*
	* Sometimes we will want to do the reverse, go from floats to integers - whilst
	* this can be done with casting, we might want to have more control over how
	* the result is rounded. 
	*
	* Luckily a few functions are avalible for this task, round, floor, and ceil. They
	* act as you might expect from the name.
	*
	* Round moves the awnser to the nearest whole number, floor to the lower whole number,
	* and ceil to the higher whole number.
	*
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/	

	double a = 12;
	double b = 7;

	int result_round = round(a / b);
	int result_floor = floor(a / b);
	int result_ceil  = ceil (a / b);

	printf("Result round: %f vs Result floor: %f vs Result ceil: %f \n", result_round, result_floor, result_ceil);

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	* 2.2 g). Functions for different data types:
	*
	* Different arithemetic functions are optimised for different types. Using pow(),
	* when exponentiating two floats will not be as fast as using powf, whereas using
	* pow when dealing with longs will return a float and reduce precision. For those
	* reasons it's important to use the right function for the right job.
	*
	* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	*/	

	float  f = 3.141592653589793238462643383279502884197;
	double d = 3.141592653589793238462643383279502884197; 
	long   l = 3.141592653589793238462643383279502884197; 

	float float_result  = powf(f, f)
	float double_result = pow(d, d)
	float long_result   = powl(l, l)

	printf("Float result: %f vs double result: %f vs long result: %Lf \n", result_round, result_floor, result_ceil);


	//TODO: Boolean Operators?
}	
