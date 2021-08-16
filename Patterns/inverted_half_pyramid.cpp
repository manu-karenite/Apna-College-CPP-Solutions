#include <iostream>
using namespace std;

void solve(int n)
{
	for(int i=n;i>0;i--)
	{
		for(int j=i;j>0;j--)
			cout<<"* ";
		cout<<endl;
	}
}

int main()
{
	cout<<"Inverted Half Pyramid : "<<endl<<endl;

	int n;
	cout<<"Enter the number of lines : ";
	cin>>n;

	solve(n);
	return 0;
}

/*OUTPUT
PS D:\AC> g++ pattern4.cpp
PS D:\AC> .\a.exe
Inverted Half Pyramid :

Enter the number of lines : 12
* * * * * * * * * * * *
* * * * * * * * * * *
* * * * * * * * * *
* * * * * * * * *
* * * * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/
