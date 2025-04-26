// program 8

#include<iostream>  //include the iostream library (a preprocessor directive)
#include<math.h>    //include the math.h library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    // variables declaration
    int n;
    int a=0;
    int b=1;
    int next;

    // prompt from user
    cout<<"Enter the number where you want to stop displaying the fibonacci series :";
    cin>>n;
    cout<<a<<"\t"<<b<<"\t";
    next =a+b;

    //using while loop
    while(next<=n)
    {
        cout<<next<<"\t";
        a=b;
        b=next;
        next =a+b;
    }


return 0;// return 0 to operating system

}