//PROGRAM 67

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Upper part including the middle
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j < i; j++)
            cout << " ";

        cout << i;

        // Only print second number if not middle
        if (i != n) {
            // Print required spaces between two numbers
            for (int k = 1; k <= (2 * (n - i) - 1); k++)
                cout << " ";
            cout << i;
        }
        cout << endl;
    }

    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j < i; j++)
            cout << " ";

        cout << i;

        // Print required spaces between two numbers
        for (int k = 1; k <= (2 * (n - i) - 1); k++)
            cout << " ";
        cout << i;

        cout << endl;
    }

}

//PROGRAM 68

#include <iostream>   // include iostream library (a preprocessor directive)
using namespace std; //using standard namespace
int main()  //main function from where exection starts
{
	// variable declaration
	int rows;
	
	//prompt from user the number of rows
	cout<<"Enter number of rows : ";
	cin>>rows;
	
	for(int i=1;i<=rows;i++) {
		for(int j=1;j<=rows-i+1;j++)
		  cout<<"*";
		  
		  for(int j=1;j<=i;j++)
		  cout<<j;
		  
		   for(int j=i-1;j>=1;j--)
		  cout<<j;
		  
		   for(int j=1;j<=rows-i+1;j++)
		  cout<<"*";
		  
		  
	cout<<endl;	  
}
return 0; // return 0 to operating system
}




//PROGRAM 69

#include <iostream>   // include iostream library (a preprocessor directive)
using namespace std; //using standard namespace
int main()  //main function from where exection starts
{
	// Enter number
	int n;
	cout<<"Enter number  : ";
	cin>>n;
	
	//  triangle of digits from entered number  without base
	
	for(int i=n;i>=1;i--) {
		for(int j=i;j>=1;j--) {
			cout<<" ";}
			cout<<i;
		
			for(int j=1;j<=(2*(n-i)-1);j++)
		     cout<<" ";
		     	if(i!=n)
				cout<<i; 
			

cout<<endl;
}
return 0; //return 0 to operating system
}


// PROGRAM 70

#include <iostream>   // include iostream library (a preprocessor directive)
using namespace std; //using standard namespace
int main()  //main function from where exection starts
{
	// loop for rows
	for(int i=3;i>=1;i--) {
		for(int j=2*i-1,k=1;j>=i;j--,k++) // loop for columns
	{
			cout<<k;
			if(j>i)
		cout<<"*";}
		cout<<endl;//END OF line
}
return 0; //return 0 to operating system
}



//PROGRAM 71

#include <iostream>   // include iostream library (a preprocessor directive)
using namespace std; //using standard namespace

int main()  //main function from where exection starts
{
	
	// for upper inverted right triangle of digits
	for(int i=4;i>=1;i--) {
		for(int j=1,k=1;j<=i;j++,k+=2)
		  cout<<k;
		  cout<<endl;  // end of line
}

   // for lower right triangle of digits
	for(int i=2;i<=4;i++) {
		for(int j=1,k=1;j<=i;j++,k+=2)
		  cout<<k;
		  cout<<endl;
}
return 0; //return 0 to operating system
}



// program 72
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int m=0;      // variable declaration
	
	for(int i=5;i>=1;i--) { // loop for rows
		m=1;
		int n=2;
		
		for(int j=1;j<=i;j++) {// loop for columns
			
			if(i%2==0 ) // check if row number is even
				 
			   {
				 cout<<" "<<m*m;
				 m=m+2;	}
			else       // if row number is odd
			{
				if(j==1)
				cout<<" "<<m;
				else
				{
				
				cout<<" "<<n*n;
				n=n+2;
			}
				
				 }	 			 		
			
}
cout<<endl;

}

   return 0; //return 0 to operating system
}
/*
output:
 1 4 16 36 64
 1 9 25 49
 1 4 16
 1 9
 1
  
*/






// program 73

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	for(int i=4;i>=1;i--) {
		char ch='A';
		for(int j=1;j<=i;j++) {
			cout<<ch;
			ch=ch+2;
			
}
cout<<endl;

}

   return 0; //return 0 to operating system
}

/*
ACEG
ACE
AC
A
*/





// program 74

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	float sum=1.0;
	int limit;
	cout<<"Enter a limit :";
	cin >> limit;
	
	for(int i=2;i<=limit;i++) {
		if ( i%2==0 )
		sum=sum-1.0/i;
		
			
	else
		sum=sum+1.0/i;
		
		
}
cout<< " The sum of series is : "<<sum;

   return 0; //return 0 to operating system
}
/*
Enter a limit :3
 The sum of series is : 0.83333
*/





// program 75
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	
	int rows;
	cout<<"Enter number of rows :";
	cin >> rows;
		cout<<"*"<<endl;
    for(int i=1;i<=rows;i++) {
    	
    	cout<<"*";
    	for (int j=1;j<=i;j++){
    		cout<<j;
			}
	for (int j=i-1;j>=1;j--){
		cout<<j;}
    	cout<<"*";
    	cout<<endl;
    	
}
 for(int i=rows-1;i>=1;i--) {
    	
    	cout<<"*";
    	for (int j=1;j<=i;j++){
    		cout<<j;
			}
	for (int j=i-1;j>=1;j--){
		cout<<j;}
    	cout<<"*";
    	cout<<endl;

}
	cout<<"*";

   return 0; //return 0 to operating system
}

/*
Enter number of rows :5
*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
*
*/




// program 76

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	for(int i=5;i>=1;i--) {
		for(int j=5;j>=1;j--) {
			
			if(i==5 || j==1 || j==i )
			cout<<"*";
			else
			cout<<" ";
}
cout<<endl;


}

   return 0; //return 0 to operating system
}

/*
*****
 *  *
  * *
   **
    *
*/





// program 77
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	for(int i=1;i<=5;i++) {
		for(int j=1;j<=5;j++) {
			
			if(i==5|| j==1 || j==i )
			cout<<"*";
			else
			cout<<" ";
}
cout<<endl;


}

   return 0; //return 0 to operating system
}

/*
*
**
* *
*  *
*****
*/








