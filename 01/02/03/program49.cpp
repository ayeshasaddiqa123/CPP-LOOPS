// program 49

#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    // outer loop for rows
    for (int i=1;i<=5;i++)
    {

        // inner loop for spaces
        for (int s=5;s>i;s--)
             cout<<" ";
            // print spaces before the numbers
        for (int j=1;j<=i;j++)
             cout<<j; // print the value of j
            cout<<endl; // print new line after each row
    }

    return 0; // return 0 to indicate successful completion of the program
}