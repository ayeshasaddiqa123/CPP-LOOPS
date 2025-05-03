//PRORAM 60

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts

{
    // output the pattern of alphabets in a   right triangle form
	for(int i=1;i<=5;i++) {
		char ch='A';
          for(int j=1;j<=i;j++) {
          	cout<<ch++;
}


	cout<<endl;     // end of the inner loop
}
return 0; // return 0 to operating system
}



//PROGRAM 61
#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	int m=1;
	 for(int i=1;i<=7;i++) {
         for(int j=1;j<=i;j++) {
         	cout<<" "<<m;
         	m=m+2;
}
			cout<<endl;
}

return 0 ; // return 0 to operating system
}



//PROGRAM 62

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	int n,i;
            // number of rows
	for( n=7, i=7;i>=1;i--,n--) {
         for(int j=1;j<=i;j++) {
         	if(j==7)
         	break;
         	cout<<j;}
         	
         	for(int s=i;s<=12-i;s++)        //for spaces
				cout<<" ";
			
				for(int e=n;e>=1;e--)
				cout<<e; 




			cout<<endl;
}
return 0;  //return 0 to operatingg system

}