// program 48

// program 6

#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    int size =5;     //size of square

    for(int i=0;i<size;i++)
    { 
        for (int j=0;j<size;j++)
        {
            if(i==0 || i==size-1 || j==0 || j==size-1) //if first or last row or column
            {
                cout<<"*";  //print star
            }
            else
            {
                cout<<" ";  //print space
            }
        }
        cout<<endl;  //print new line after each row
    }
        return 0; //return 0 to indicate successful completion of the program
    }































