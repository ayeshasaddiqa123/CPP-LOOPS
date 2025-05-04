//PROGRAM 26

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>     //include the mathlibrary (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	//variables declaration

	float sum=1.0;
	int fact=1;
	int limit;
	int x;
	
	cout<<"Enter  the limit : ";
	cin>> limit;
	cout<<"Enter x : ";
	cin>> x;
	
	for(int i=1;i<=limit;i++) {
		fact=fact*i;
		sum=sum+pow(x,i)/double(fact);
}
// output
	cout<<"The sum of series is : "<<sum;
	return 0; //reeturn  0 to operating system
}

// Program 27

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>     //include the mathlibrary (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	//variables declaration
	float sum=1.0;
	int fact=1;
	int limit;
	int x;
	int step=0;
	
	cout<<"Enter  the limit : ";
	cin>> limit;
	cout<<"Enter x : ";
	cin>> x;
	
	for(int i=2;i<=limit;i+=2) {
	     fact=1;
	   for(int j=i;j>=2;j--) {
	   	fact=fact*j;
}

   if( step%2==0)
   sum=sum-pow(x,i)/double(fact);
   else
   sum=sum+pow(x,i)/double(fact);
   
   step ++;
}
	cout<<"The sum of series is : "<<sum;
	return 0; //return 0 to operating system
}


//PROGRAM 28
#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>     //include the mathlibrary (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	// variable declaration
	int num;
	cout<<"Enter number : ";
	cin>> num;
	
	for(int i=1;i<=num/2;i++) {
	    if(num%i==0)
	    cout<<i<<" is the factor of : "<<num<<endl;
}

  return 0; //return 0 to operating system
	
}

// PROGRAM 29
#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>     //include the mathlibrary (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	//variables declaration
	int num;
	int sum=0;
	
	//input
     cout<<"Enter total numbers you want to add : ";
     cin>>num;
     
     for(int n=1;n<=5;n++)
       {
       	 cout<<"Enter number : ";
       	 cin>>num;
       	 sum=sum+num;
	   }
     
cout<<"Sum is :"<<sum;
  return 0; //return 0 to operating system
	
}


//PROGRAM 30

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>     //include the mathlibrary (a preprocessor directive)
#include<iomanip>     //include the iomanip library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	int r=5; //annual interest rate
	double p=1000.00;   //investment
	double a=0; //total amount deposited
	 
	 for(int year=1;year<=10;year++)
	   {
	   	a=p*(pow((1+r),year));
	   	cout<<"Year "<<year <<" has deposited: "<<"$"<<fixed<<setprecision(2)<<a<<endl;
	   }
	
  return 0; //return 0 to operating system
	
}