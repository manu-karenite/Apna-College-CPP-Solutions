#include <iostream>
using namespace std;

void solve(int row , int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<"* ";
		cout<<endl;
	}
}
int main()
{
	cout<<"Solid Rectangle"<<endl<<endl;
	cout<<"Enter no of rows : ";
	int row;
	cin>>row;

	cout<<"Enter Number of Columns : ";
	int col;
	cin>>col;

	solve(row,col);
	return 0;
}

/*OUTPUT
PS D:\AC> g++ pattern1.cpp
PS D:\AC> .\a.exe
Solid Rectangle

Enter no of rows : 10
Enter Number of Columns : 5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
