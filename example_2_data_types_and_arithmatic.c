// PXT102/202 C Programming Language Workshop
// Example  2 - "Data Types"
// Demonstrators: Zoltan Sztranyovszky and Michael Norman

//Two new includes
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//Talk about stack vs heap


int main()
{
	//Here are a bunch of datatypes:
	//They are defined on the stack.

	//Declaration and Definition:

	int x;

	//Initilization:

	x = 10;

	//Declaration and initilization:

	int y = 20;

	//Declare multiple:

	int a, b, c;

	//Integer Types:
	
	short          		short_variable;              
	unsigned short 		unsigned_short_variable;

	int            		integer_variable;
	unsigned int   		unsigned_integer_varaible;

	long           		long_variable;
	unsigned long  		unsigned_long_variable;   

	long long      		long_long_variable;
	unsigned long long  unsigned_long_long_variable;        

	//Float Types:

	float              float_variable;
	double             double_variable;
	long double        long_double_variable;

	//Boolean Types
	bool               boolean;

	//Characters and strings:
	
	char this_is_a_string[] = "Hello Cardiff. \n";

	printf(this_is_a_string);

	//To find the size (in bytes) of any datatype, use the sizeof function:
	printf("The size of an integer is: %d \n", sizeof(int));

	//To find the maximum value of of a datatype use the <limits.h> library:

	//Arithmetic operators:

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

	//Bracketing:

	int brackets    = 2 * ( 1 + 1 );
	int no_brackets = 2 * 1 + 1;

	printf("Bracketed result: %d vs non-bracketed result: %d \n", brackets, no_brackets);

	//Arithmetic functions -> avalible in <stdlib.h>:

	//Exponents:

	double power_1 = pow(3, 2);
	double power_2 = 3*3

	//Integer vs float division:

	double float_result   = 3.0 / 2.0 
	int    integer_result = 3 / 2

	printf("Float result: %f vs integer result: %d \n", float_result, integer_result);

	// Casting:

	int a = 12;
	int b = 7;

	double casted_a = (double) a;
	double cast_result = (double) a / (double) b;

	printf("Float result of casted divsion: %f \n", cast_result);

	// Rounding functions:

	double a = 12;
	double b = 7;

	int result_round = round(a / b);
	int result_floor = floor(a / b);
	int result_ceil  = ceil (a / b);

	printf("Result round: %f vs Result floor: %f vs Result ceil: %f \n", result_round, result_floor, result_ceil);

	//Differnet type functions:

	float  f = 3.141592653589793238462643383279502884197;
	double d = 3.141592653589793238462643383279502884197; 
	long   l = 3.141592653589793238462643383279502884197; 

	float float_result  = powf(f, f)
	float double_result = pow(d, d)
	float long_result   = powl(l, l)

	printf("Float result: %f vs double result: %f vs long result: %Lf \n", result_round, result_floor, result_ceil);

}	
