//Program 63
#include <iostream>
using namespace std;

int main() {
    int rows = 10;  // Number of rows for the triangle

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        if (i == 1 || i == rows) {
            // Print full row of '&' for top and bottom
            for (int j = 1; j <= (i == 1 ? 1 : 2 * rows - 1); j++) {
                cout << "&";
            }
        } else {
            // Print '&' at start and end with spaces in between
            cout << "&";
            for (int j = 1; j <= 2 * i - 3; j++) {
                cout << " ";
            }
            cout << "&";
}

cout<<endl;
}
}




//PROGRAM 64

#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<6;i++) {
		for(int j=0;j<=i;j++) {
			cout<<j;
}
cout<<endl;
}
return 0; // return 0 to operating system
}



// PROGRAM 65
#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<6;i++) {
		if(i%2==0)
		cout<<" ";
		for( int j=1;j<=8;j++) {
			cout<<"-";
}
cout<<endl;
}
return 0 ;  //return 0 to operating system
}



//PROGRAM 66

#include<iostream>
using namespace std;
int main()
{
  
  for(int i=0;i<6;i++) {
  	
  	for( int j=0;j<6;j++) {
  		char ch='A'+(i+j)%6;
  		cout<<ch;
}
cout<<endl;
}
return 0;

}



