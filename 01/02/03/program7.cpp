// program 7
#include<iostream>  //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{    
    // variable declaration
    int num,min;

   // prompt from user
    cout<<" Enter a number :";
    cin>>num;
    min=num;

    // enter 20 numbers using for loop
     for(int i=1;i<20;i++)
    { 
        cout<<" Enter a number :";
    cin>>num;
    if(num<min)
    min=num;
    }

    // display min number
    cout<<"Minimun number is : "<<min;

return 0; // return 0 to operating system
}