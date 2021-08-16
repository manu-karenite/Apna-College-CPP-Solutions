#include <iostream>
using namespace std;


void solve(int n)
{
	int i = 1;
	for(int j=1;j<=n;j++)
	{
		for(int k=1;k<=j;k++)
			cout<<i++<<" ";
		cout<<endl;
	}
}
int main()
{
	cout<<"Floyd's Triangle : "<<endl<<endl;
	int n;
	cout<<"Enter number of lines : ";
	cin>>n;

	solve(n);
	return 0;

}

/*OUTPUT
PS D:\AC> g++ pattern10.cpp
PS D:\AC> .\a.exe
Floyd's Triangle :

Enter number of lines : 10
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35 36
37 38 39 40 41 42 43 44 45
46 47 48 49 50 51 52 53 54 55
*/
