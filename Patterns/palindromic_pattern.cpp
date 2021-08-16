#include <iostream>
using namespace std;


void solve(int n)
{
	//space + number == n for every row
	int i;
	for(i=1;i<=n;i++)
	{
		//for number of lines
		int j;
		for(j=1;j<=n-i;j++)
			cout<<" "; 
		//space would be given
		//Now numbers

		for(int k=1;k<=i;k++) //for first half of the series
			cout<<k;
		for(int p=i-1;p>0;p--) //for the second half of the series 
			cout<<p;
		cout<<endl;
	}
}
int main()
{
	cout<<"Palindromic Pattern : "<<endl<<endl;
	int n;
	cout<<"Enter number of rows : ";
	cin>>n;
	cout<<endl;

	solve(n);
	return 0;
}

/*OUTPUT
PS D:\AC> g++ pattern12.cpp
PS D:\AC> .\a.exe
Palindromic Pattern :

Enter number of rows : 5

    1
   121
  12321
 1234321
123454321
*/

