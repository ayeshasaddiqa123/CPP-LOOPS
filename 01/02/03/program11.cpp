#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{ 
    int s;
    int highest=1;
    int sechighest=1;
    cout<<"Enter number of students in class : ";
    cin>>s;


// for loop to take input of marks of students
    for(int i=1;i<=s;i++)
    {
        int marks;
        cout<<"Enter marks of "<<i<< "student : "; 
        cin>>marks;

        if(marks>highest)
        {
            sechighest = highest;
highest = marks;
        }
        else if(marks>sechighest && marks<highest)
        {
            sechighest=marks;
        }
        else if(marks==highest)
        {
            cout<<"This is duplicate marks"<<endl;
        }
        else if(marks==sechighest)
        {
            cout<<"This is duplicate marks"<<endl;
        }
    }
    
    cout<<endl; //print a new line
    cout<<"Marks of students are : "<<endl;
    cout<<"Highest marks are : "<<highest<<endl;
    cout<<"Second highest marks are : "<<sechighest<<endl;

    return 0;         //return 0 to indicate successful execution
}                   