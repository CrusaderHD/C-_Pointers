//Creator Information:
/*
 *Name: Hunter Derrick
 *Professor Name: Tony Hinton
 *Class: CSC215 @ UAT
 *Assignment: Learn Pointers with C++.
 *Assignment Start Date: 11/11/2018
 *Assignmnet Complete Date: 11/11/2018
 */
//Task Information:
/*
Create a new console project C++ program.
Create at least two pointers in main that point at variables with at least two different data types.
Make your program uses more than one function.
In one or more function(s), pass a pointer into the function.
In one or more function(s), return a pointer from the function.
Use and assign the returned pointer in your code.
Come up with a creative program
Your program should do something, in addition to demonstrate your knowledge of pointers. 
Your main function should control all the other functions.
 */

//Declare the PreProcessor Directives.
#include <iostream>
#include <string>
#include <cstdlib>

//Let's add in a namespace
using namespace std;

//Creating a function to show the use of Integer pointers.
void UsingIntPointers()
{
	
	int x = 25;  //Initial value of the assigned int variable of 'X'. This will be used in a pointer/reference example.
	int* p = &x;  //Referencing the variable type of int. Where x=25, but it is being pointed to a spot in memory and then will be referred to later.

	//Here we will show case the initial value of X. 
	cout << "\nThe initial given value of 'X' is: " << x << endl;

	//This will display what the address value is and where the value of 'X' is being pointed to in memory/stored in memory.  
	cout << "\nThe address where the value of 'X' is being pointed too is: " << p << endl;

	//Below is how we are retrieving the VALUE of the pointed block of memory where the variable 'int x' was stored. 
	/*
	If you are wanting to see the actual variable value you need to DE-reference the pointer. To DE-reference, place an asterisk In front of the pointer variable.
	Here we will call upon the VALUE of the stored reference of the variable. Here we call *p as this will call upon the value placed in the particular memory location.
	 */
	cout << "The stored value of the address is: " << *p << endl;

	system("pause");

}

//Creating a function to show the use of String pointers.
void UsingStringPointers()
{
	
	string name = "Hunter"; //Initial value of the assigned string variable. This will be used in a pointer/refernce example.
	string* n = &name;  // Referencing the variable string name of Hunter to the letter n. 

	//Here we will show the initial value of the string name.
	cout << "\nThe initial value of string name is: " << name << endl;

	//This will display what the address value is and where the value of 'name' is being pointed to in memory/stored in memory.
	cout << "\nAddress of where the reference of name is: " << n << endl;

	//Below is how we are retrieving the VALUE of the pointed block of memory where the variable 'string name' was stored. 
	/*
	If you are wanting to see the actual variable value you need to DE-reference the pointer. To DE-reference, place an asterisk In front of the pointer variable.
	Here we will call upon the VALUE of the stored reference of the variable. Here we call *n as this will call upon the value placed in the particular memory location.
	 */
	cout << "\nThe stored variable contents of the address above is: " << *n << endl;

}

//Creating a function to introduce the user to the program.
void WelcomeUser()
{
	cout << "\t\tHello! Welcome to the Use of Pointers!" << endl;
	cout << "\n\nHere you will see the use of two kinds of pointers and references. Integers and String." << endl;
	system("pause");
}

int main()
{
	WelcomeUser();
	UsingIntPointers();
	UsingStringPointers();
	system("pause");
	return(0);
}
