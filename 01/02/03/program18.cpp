// prgram 18

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    // variable declaration
    int n,r;
    int sum=0;

    // input
    cout<<"Enter a number: ";   //prompt user for input
    cin>>n;   //read input from user and store it in variable n


    cout<<"Ener range";
    cin>>r;   //read input from user and store it in variable r


    //for loop to iterate from 1 to r
    for(int i=1;i<=r;i++)   
    sum=sum+pow(n,i);   //calculate the power of n to i and add it to sum

    //output the result
    cout<<"Sum of powers of "<<n<<" is: "<<sum;   
   

    return 0;   //return 0 to indicate successful execution of the program
}