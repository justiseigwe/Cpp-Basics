/************************************************************
Program: Basic Maths Functions
File: CppMathsBasics.cpp
Function: Main (complete program listing in this file)
Description: Define the basic maths function by using classes and inheritance to demonstrate it
Author: Justice Igwe Chikaodi (jic)
Environment: Dev C++ version 5.11, 4,086mb RAM, Windows 10
Notes: This is just a demonstration of how the compute the basic maths function in cpp style.

************************************************************/
#include <iostream>

using namespace std;

class Maths {
	 
	public:
		//function to add
		int add(int a, int b){
		  return (a + b);	
		}
		//function to substract
		int substract(int a, int b){
			return ( a - b);
		}
		//function to divie
	   int divide(int a, int b){
	   	 int temp = 0;
	   	 if (a > b)
	   	 	temp = (a /b);
	   	 	else
	   	 	temp = (b/a);
	   	 	
	   	 	return temp;
	   }
	   //function to find factorial using recursive function
	   long factorial(int i){
	   	int x = 1;
	   	 if ( i == 1 )
	   	 	return i;
	   	 	
	   	 	for(; x < i; x ++ )
	   	    return ( i * factorial(i - x)) ;
	   }
			
};


int main(){
	  Maths m;
	 //factorial
	 cout <<" Factorial of 5 is "<< m.factorial(5) <<endl;
	 
	 //addition
	 cout <<" The sum of 5 + 6 = "<< m.add(5,6)<<endl;
	 
	 //substraction
	 cout <<" The product of 6 - 4 = "<< m.substract(6,4)<<endl;
	 
	 getchar();
	 return 0;
}


