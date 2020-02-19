//Exercise 1 - "Hello Cardiff!":
//Part of the C workshop run by Michael Norman and Zoltan

//Part 1.1: Compiler Preprocessing:

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 1.1 a). Comments:
*
* When compiling a text file to form an executable, the compiler will peform a
* number of steps before it looks at the rest of the code, this is known as
* preprocessing. One of the first steps is to replace comments with whitespace.
* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

// A double forward-slash designates a single-line comment, the compiler will
// ignore all characters on this line after that point.

/*
 * This is a multi-line comment. Any characters within these two symbols will
 * be ignored by the compiler.
*/

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 1.1 b). Include statements:
 *
 * During preprocessing the compiler will also evaluate inclue statments, this
 * lets you include whole other c scripts within your c script without having
 * to paste the entirety of the file into your script.
 *
 * When included these files will act as if they are part of your script allow-
 * ing you acess to their functions and defintions. The C standard comes with
 * many different libaries by default, each with their own usefull functions
 * and variables. Always have a look to see if certain functionality is conta-
 * ined within one of the standard C libraries before writing your own.
 *
 * For this test script, will will be including the stdio.h library - it stands
 * for Standard Input-Ouput and contains many functions which allow data trans-
 * fer too and from the program. Including printf as used bellow. 
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#include <stdio.h> // <-- This is an include statment.

//Part 1.2 The Main Function:

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 1.2 a). The main function:
 * 
 * Like most programing languages C allows for the use of functions. We will
 * explore how to create our own functions in a later example but for now we 
 * will only breifly cover there structue. Anything defined within a function
 * lies within that functions functional block or Function Scope.
 *
 * Anything that is defined outside of any function lies only within the File
 * Scope - it is a global definition that can be accessed anywhere in the
 * program. 
 *
 * Unlike in Python, you cannot code in the File (Global) Scope, you must be
 * inside a function block in that function's Function Scope. After preprocess-
 * ing the compiler will look for a function declaration called 'main'. This is
 * the function that tells the compiler what you want the executable it creates
 * to run.  
 *
 * In C a function is comprised a a few distinct elements:
 *
 * The first line - the function header, is comprised of three parts:
 *
 * - The return type: this tells the compiler what data type the function will
 *   return on completion. For the main function, we usually set this as an 
 *   integer, then return the value of 0 on succesfull program completion.
 *
 * - The function name: this is the coder defined name which will act as a 
 *   reference to that function's defintion. In the case of the main function,
 *   this must always be set to 'main'.
 *
 * - The formal parameters: these are your functions arguments enclosed by '()'
 *   they define what must be inputted into the function and act as a way to
 *   pass variables into that functions function scope. In this case we do not
 *   want to pass any paremeters so we leave these brackets empty.
 *
 * The next lines - the function body, are bracketed by '{}' curly brakets. 
 * Within the function body the code you want that function to run is written.
 *
 * Within our main function below, we execute the printf function. See section
 * 1.2 c). below.
 *
 * In c there are a number of keywords which the compiler has specific rules
 * on how to interpret. The 'return' keyword sets the value that a function
 * returns and exits the function with this value when it is called. 
 * In the special case of the main function, returning a value of 0 usually
 * means the function has executed correctly.
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

//Main function:

int main() //<-- This is the function header. return_type function_name(formal_parameters) 
{ //<-- Open function body.

	printf("Hello World!\n"); //<- Call the printf function.

	return 0; //<-- Return 0 if the program executes correctly.

} //<-- Close function body.

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Newline syntax and indentation:
 *
 *
 *
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 * 1.2c) The printf function
 *
 * The printf function allows the user to print a string variable to the 
 * command line. In C strings are 
*/
