#include <iostream>
using namespace std;


void solve(int n)
{
	//num of rows = n
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
			cout<<"* ";
		cout<<endl;
	}
}
int main()
{
	cout<<"Half Pyramid "<<endl<<endl;

	int n;
	cout<<"Enter number of rows : ";
	cin>>n;

	solve(n);
	return 0;
}


/*OUTPUT
PS D:\AC> g++ pattern3.cpp
PS D:\AC> .\a.exe
Half Pyramid

Enter number of rows : 10
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * * * *
* * * * * * * * * *
*/
