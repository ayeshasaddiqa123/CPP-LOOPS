// program 4

#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	// variable declaration
	int count =0;
	for(char ch='A';ch<='Z';ch++) 
	{
			count++;
	    	cout<<ch<<"\t";  // display alphabets 
		if(count%4==0)
		   cout<<endl;
}
 return 0; // return 0 to operating system

}