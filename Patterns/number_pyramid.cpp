#include <iostream>
using namespace std;
#define gap cout<<endl<<endl;


void solve(int row)
{
	int space = row-1;
	for(int i=1;i<=row;i++)
	{
		//give space first
		for(int i1=1;i1<=space;i1++)cout<<" ";

		for(int k=1;k<=i;k++)
			cout<<i<<" ";
		space--;
		cout<<endl;
	}
}
int main()
{
	cout<<"Number Pyramid : ";
	gap;
	cout<<"Enter the number  of lines : ";
	int row;
	cin>>row;
	gap;
	solve(row);
	gap;
	return 0;


}
/*OUTPUT
PS D:\AC> .\a.exe
Number Pyramid :

Enter the number  of lines : 8


       1
      2 2
     3 3 3
    4 4 4 4
   5 5 5 5 5
  6 6 6 6 6 6
 7 7 7 7 7 7 7
8 8 8 8 8 8 8 8


*/
