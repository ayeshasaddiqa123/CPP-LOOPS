// prgram 19

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts

{
    // variables declaration
    int x;
    int sum=1;

    // input
    cout<<"Enter a number: ";  //prompt user for input
    cin>>x;  //read input from user and store it in variable x

    for(int i=1;i<5;i++)
    sum=sum+(i+1)*pow(x,i);  //calculate the sum of the series using a for loop

    // output
    cout<<"Sum of the series is: "<<sum<<endl;  //display the result to the user

    // return 0;  //return 0 to indicate successful completion of the program (optional in C++)
}