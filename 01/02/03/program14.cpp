#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts


{
    // varaibles declaration
    int n,option,fact;


    // using do while loop
    do{
        cout<<"Enter a number to find factorial: ";  //prompt user for input
        cin>>n;   //take input from user

           fact=1;   //initialize fact to 1

        // using for loop to calculate factorial
        for(int i=1;i<=n;i++)
            {
            fact=fact*i;   //calculate factorial
 }

        cout<<"Factorial of "<<n<<" is: "<<fact<<endl;  //display the result
      cout<<"Do you want to continue? (1/0): ";  //prompt user for continuation
        cin>>option;   //take input from user


    }while(option==1);  //continue if user enters 1

    return 0;   //return 0 to indicate successful
}