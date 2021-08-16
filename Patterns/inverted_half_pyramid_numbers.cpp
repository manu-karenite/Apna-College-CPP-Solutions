#include <iostream>
using namespace std;

void solve(int n)
{
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";

		}
		cout<<endl;
	}
}
int main()
{
	cout<<"Inverted Half Pyramid using numbers : "<<endl<<endl;
	int n;
	cout<<"Enter number of rows : ";
	cin>>n;

	solve(n);
	return 0;
}

/*OUTPUT
PS D:\AC> g++ pattern7.cpp
PS D:\AC> .\a.exe
Inverted Half Pyramid using numbers :

Enter number of rows : 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
PS D:\AC>

*/
