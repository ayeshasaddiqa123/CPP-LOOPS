// program 01 code

#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	
       // variables declaration
		int a=1,b=5;

	cout<<"----------\n"<<"a\tb\n"<<"----------\n";
	
	while(a<=5 && b>=1)
	{
		cout<<a<<"\t"<<b<<"\n";
		a++;
		b--;
	}
	 cout<<"----------\n";

     return 0; // return 0 to operating system
}