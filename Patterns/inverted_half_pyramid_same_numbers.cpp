#include <iostream>
using namespace std;


void solve(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
			cout<<i<<" ";
		cout<<endl;
	}
}
int main()
{
	cout<<"Inverted Half Pyramid using numbers only : "<<endl<<endl;
	cout<<"Enter the number of lines :  ";
	int n;
	
	cin>>n;

	solve(n);
	return 0;
}

/*OUTPUT
PS D:\AC> g++ pattern9.cpp
PS D:\AC> .\a.exe
Inverted Half Pyramid using numbers only :

Enter the number of lines :  10
1 1 1 1 1 1 1 1 1 1
2 2 2 2 2 2 2 2 2
3 3 3 3 3 3 3 3
4 4 4 4 4 4 4
5 5 5 5 5 5
6 6 6 6 6
7 7 7 7
8 8 8
9 9
10
*/
