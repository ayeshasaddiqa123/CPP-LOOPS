// prgram 13

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    int n;
    int p=1;
    int num;

    cout<<"Enter limit :";  //prompt the user to enter a limit
    cin>>n;

    for(int i=2;i<=n;i++)

    {
        p=1;
        num=i;
        for(int c=2;c<=num/2;c++)
        {
            if(num%c==0)
            {
                p=0;
              break;
            }
        }
        if(p==1)
        {
            cout<<num<<" is  prime number"<<endl;
        }
       

    }

return 0;   //return 0 to indicate successful completion of the program
}