#include <iostream>
using namespace std;
#define gap cout<<endl<<endl

void solve(int row)
{
	int space = row-1;
	for(int p=1;p<=row;p++)
	{
		for(int i=1;i<=space;i++)cout<<" ";
		for(int j=1;j<=row;j++)cout<<"*";
		space--;
		cout<<endl;
	}
}

int main()
{
	gap;
	cout<<"Solid Rhombus : ";
	gap;
	cout<<"Enter the height of rhombus : ";

	int row ;
	cin>>row;
	gap;
	solve(row);
	gap;
	return 0;
}

/*OUTPUT
PS D:\AC> g++ pattern16.cpp
PS D:\AC> .\a.exe


Solid Rhombus :

Enter the height of rhombus : 10


         **********
        **********
       **********
      **********
     **********
    **********
   **********
  **********
 **********
**********

*/
