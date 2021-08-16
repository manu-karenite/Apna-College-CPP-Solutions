#include <iostream>
using namespace std;
#define gap cout<<endl<<endl


void solve(int n)
{
	int space = n-1;
	for(int p=1;p<=n;p++)
	{
		for(int i=1;i<=space;i++) cout<<" ";
		if(1==p || p==n)
			{
				for(int l = 1;l<=n;l++)
				cout<<"*";
			}
		else
		{
			cout<<"*";
			for(int i=1;i<=n-2;i++) cout<<" ";
				cout<<"*";

		}
		space--;
		cout<<endl;
	}
}
int main()
{
	cout<<"Hollow Rhombus : ";
	gap;
	cout<<"Enter the height of rhombus : ";
	int n;
	cin>>n;
	gap;
	solve(n);
	gap;
	return 0;
}
/*OUTPUT
PS D:\AC> g++ pattern17.cpp
PS D:\AC> .\a.exe
Hollow Rhombus :

Enter the height of rhombus : 10


         **********
        *        *
       *        *
      *        *
     *        *
    *        *
   *        *
  *        *
 *        *
**********

*/
