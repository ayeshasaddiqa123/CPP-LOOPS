
//program 56

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    // ouuter loop for number of rows
	for(int i=5;i>=1;i--) {
		for(int s=0;s<5-i;s++) // loop for space
			cout<<".";
			for(int j=1;j<=2*i-1;j++) // loop for printing B
				cout<<"B";


cout<<endl;

}
return 0 ; // return 0 to operating system
}




// program 57
#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{

    // ouuter loop for number of rows
	for(int i=5;i>=1;i--) {
		for(int s=0;s<5-i;s++) // loop for space
			cout<<" ";
			for(int j=1;j<=2*i-1;j++) // loop for printing &
				cout<<"&";
			cout<<endl;
}

return 0 ; // return 0 to operating system
}




// program 58

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    // ouuter loop for number of rows
	for (int i=1;i<=4;i++){
	// loop for space
	  for(int s=0;s<5-i;s++) 
        cout<<" ";
        	for(int j=1;j<=2*i-1;j++)     // loop for printing * 
				cout<<"*";// diamond pattern
			cout<<endl;
        

}
	
	
	for(int i=5;i>=1;i--) {
		for(int s=0;s<5-i;s++) 
			cout<<" ";
			for(int j=1;j<=2*i-1;j++) 
				cout<<"*";
			cout<<endl;
}

return 0 ; // return 0 to operating system
}

// program 59
#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts

{
	for(int i=1;i<=10;i++) {
		
		for(int s=1;s<=10-i;s++) {
			cout<<" ";
		}
			
			for (int e=i;e<2*i;e++)// loop for increasing number
            {
                cout<<e%10;
                
            }
			{
				cout<<e%10;
				
			}
			
			for(int j=2*i-2;j>=i;j--)// loop for decreasing number
			cout<<j%10;
		
	cout<<endl;
}
return 0; // return 0 to operating system
}



