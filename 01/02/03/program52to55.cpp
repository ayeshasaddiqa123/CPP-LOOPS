// PROGRAM 52

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts

{   
    // outer loop for rows
    for (int i=1;i<=5;i++)
        {for(int j=1;j<=i;j++)//inner loop for columns
            cout<<j;
            cout<<endl;}

            return 0 ; //return 0 to operating system
}



// PROGRAM 53

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts

{
    // outer loop for rows
	for(int i=1;i<=5;i++) 
	{
			for(int j=1;j<=5;j++) //inner loop for columns
			cout<<" "<<i*j;

cout<<endl;
}
return 0; //return 0 to operating system
}


// PROGRAM 54

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts

{
    // outer loop for rows
	for(int i=1;i<=4;i++) {
		cout<<i;
		for(int j=2;j<=6;j+=2) // inner loop for columns
			cout<<" "<<j;
				cout<<endl;
}
return 0; //return 0 to  operating system
}



// PROGRAM 55

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts

{
    

    int rows = 5;
    int cols = 11;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Determine positions of asterisks
            if ((i == 0 && j == 5) ||             // Top of triangle
                (i == 1 && (j == 4 || j == 6)) ||
                (i == 2 && (j == 3 || j == 7)) ||
                (i == 3 && (j == 2 || j == 8)) ||
                (i == 4 && (j == 1 || j == 9)))   // Bottom row has 2 asterisks
            {
                cout << "* ";
            }
            else {
                cout << "# ";
            }
        }
        cout << endl;
    }

    return 0;}


