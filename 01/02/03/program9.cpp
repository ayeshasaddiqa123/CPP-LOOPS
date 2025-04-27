//program 9

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{

    //variables declaration
    int num=0;
    int range;
    int r;
    int sum=0;
    int digits;
    int temp;


    // prompt from user
   cout<<"Enter the number where you want to stop displaying the armstrong numbers :";
   cin>>range;

   for(num=1;num<=range;num++)
   {
      temp=num;
      digits=0;
      sum=0;

      while(temp!=0)
      {
         digits++;
         temp=temp/10;
      }
      temp=num;
   while(temp!=0)
   {
    
    r=temp%10;
    sum= sum+pow(r,digits);
   temp=temp/10;
   }
    
    if(sum==num)
    cout<<num<< " is armstrong.\n";
   //sum=0;
      
   }
 
   return 0; //return 0 to operating system
}