// program no 2

#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts

{

// varaiable declaration
int num=1;
int sum=0;

 cout<<"------------\n"<<"num\tsum\n"<<"------------\n";

while(num<=5)
{
sum=sum+num;
cout<<num<<"\t"<<sum<<"\n";
num++;
}

cout<<"------------";

return 0; //return 0 to operating system

}