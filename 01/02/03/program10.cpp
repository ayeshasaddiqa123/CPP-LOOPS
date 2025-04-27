#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    //variables declaration
    int limit;

    // prompt from user
    cout<<"Enter the number where you want to stop displaying the perfect numbers :";
    cin>>limit;
    cout<<"The perfect numbers are :\n";

    //loop to find perfect numbers
    for(int i=1;i<=limit;i++)
    {
        int sum=0;

        //loop to find the sum of divisors of i
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i)
        {
            cout<<i<<endl;
        }
    }
    return 0; //return 0 to operating system

}