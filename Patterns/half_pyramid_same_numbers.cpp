#include <iostream>
using namespace std;


void solve(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<i<<" ";
		cout<<endl;
	}
}
int main()
{
	cout<<"Half Pyramid using same numbers : "<<endl<<endl;
	cout<<"Enter number of rows : ";
	int n;
	cin>>n;
	solve(n);
	return 0;
}

/*OUTPUT
PS D:\AC> g++ pattern8.cpp
PS D:\AC> .\a.exe
Half Pyramid using same numbers :

Enter number of rows : 12
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9
10 10 10 10 10 10 10 10 10 10
11 11 11 11 11 11 11 11 11 11 11
12 12 12 12 12 12 12 12 12 12 12 12
*/
