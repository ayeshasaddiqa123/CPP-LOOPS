// Program 15

#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    // VARIABLES DECLARATION
	int num;
	int p=1;

    // INPUT
	cout<<"Enter a number to check wether it is prime or not : ";
	cin>>num;
	
    // CHECKING FOR PRIME OR COMPOSITE NUMBER
	for(int c=2;c<=num/2;c++) {
		if(num%c==0)
		{p=0;
		break;
		
		}
}
if(p==1)
cout<<num<<" is prime.";
else 
cout<<num<<" is composite.";
 
return 0; //return 0 to operating system
}

// program 16

#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    // VARIABLES DECLARATION
	int n,seclargest;

    // INPUT
	cout<<"Enter a number :";
	cin>>n;
  int 	max=n;

  // CHECKING FOR SECOND LARGEST NUMBER
	while(n!=0) {
		if (n>max)
	{
		seclargest=max;
		max=n;
		}
		cout<<"Enter a number :";
	cin>>n;
		
}
// OUTPUT
    if (seclargest==max)
    cout<<"There is no second largest number.";
    else
cout<<"Second largest number is : "<<seclargest;
}



//PROGRAM 17

#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    // VARIABLES DECLARATION
	int n,num;
	int countpositive=0,countnegative=0;

    // INPUT
	cout<<"Enter total numbes you want to enter :";
	cin>>n;
  
    // CHECKING FOR POSITIVE AND NEGATIVE NUMBERS
  for(int i=1;i<=n;i++)
  {
  	cout<< "Enter a number : ";
  	cin>>num;
  	if(num>0)
  	countpositive++;
  	else
  	countnegative++;
  }

  // OUTPUT
   cout<<"\nTotal numbers are : "<<n;
  cout<<"Total positive numbers are : "<<countpositive;
   cout<<"\nTotal negative numbers are : "<<countnegative;
  
return 0; //return 0 to operating system  
}
