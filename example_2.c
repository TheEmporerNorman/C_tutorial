#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	//Here are a bunch of datatypes:
	//They are declared on the stack.
	
	short int     short_integer_variable    = 0;

	int           integer_variable          = 0;
	unsigned int  unsigned_integer_varaible = 0;

	bool          boolean                   = 0;

	float         float_variable            = 0.0;
	double        double_variable           = 0.0;
	long double   long_double_variable      = 0.0;
	
	//To find the size (in bytes) of any datatype, use the sizeof function:
	
	printf("The size of an integer is: %zu \n", sizeof(int));

	char this_is_a_string[] = "Hello Cardiff. \n";

	printf(this_is_a_string);

	//basic maths and casting.
}	
