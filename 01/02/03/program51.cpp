// program 51

#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    
    // variable initialization
    int m=0;

    // outer loop for rows
    for (int i=5;i>=1;i--)
    {
        // inner loop for columns
        for(int j=1;j<=i;j++)
             cout<<j+m;
             cout<<endl;// print new line after each row
             m++;      // increment m after each row
    }

    return 0; // return 0 to indicate successful

}