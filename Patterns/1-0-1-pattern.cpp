#include <iostream>
using namespace std;


void solve(int n)
{
	int k=0;
	for(int i=1;i<=n;i++)
	{
		//here
		if(i%2==1)
			k=0;
		else
			k=1;
		for(int j=1;j<=i;j++)
		{
			
			k=k^1;
			cout<<k<<" ";
		}
		cout<<endl;

	}
}
int main()
{
	cout<<"1-0-1 Pattern : "<<endl<<endl;

	int n;
	cout<<"Enter number of rows : ";
	cin>>n;

	solve(n);
	return 0;
}
/*Output 
PS D:\AC> .\a.exe
1-0-1 Pattern :

Enter number of rows : 10
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
1 0 1 0 1 0 1
0 1 0 1 0 1 0 1
1 0 1 0 1 0 1 0 1
0 1 0 1 0 1 0 1 0 1
*/
