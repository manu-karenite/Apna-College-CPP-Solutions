#include <iostream>
using namespace std;

void inline solve(int n)
{
	cout<<n*(n+1)/2<<endl;
	
}
int main()
{
	int n;
	cin>>n;
	solve(n);
	return 0;
}

/*OUTPUT
PS D:\AC\functions> g++ sum_n_numbers.cpp
PS D:\AC\functions> .\a.exe
8
36
PS D:\AC\functions> .\a.exe
7
28
PS D:\AC\functions> .\a.exe
100
5050
PS D:\AC\functions> .\a.exe
2
3
*/
