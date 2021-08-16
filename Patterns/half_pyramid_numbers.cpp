#include <iostream>
using namespace std;


void solve(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<j<<" ";
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Half Pyramid using Numbers : "<<endl<<endl;

	cout<<"Enter number of lines : ";
	cin>>n;

	solve(n);
	return 0;
}
/*OUTPUT
PS D:\AC> g++ pattern6.cpp
PS D:\AC> .\a.exe
Half Pyramid using Numbers :

Enter number of lines : 15
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10 11
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12 13
1 2 3 4 5 6 7 8 9 10 11 12 13 14
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

*/
