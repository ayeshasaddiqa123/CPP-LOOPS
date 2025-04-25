// program 3

#include<iostream>  //include the iostream library (a preprocessor directive)
#include<math.h>    //include the math.h library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	// variables declaration
float sum=1.0;
	int den;
	int i=2;
	
	// using do while
	do {
		den=pow(2,i);
		sum=sum+(1.0/den);
		i++;
		
} while(den<=100);

// display on screen
cout<<"Sum of the series is : "<<sum;


return 0; //return 0 to operating system



}