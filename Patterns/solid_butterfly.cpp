#include <iostream>
using namespace std;
#define gap cout<<endl<<endl



void upleft(int row)
{
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=i;j++)cout<<"*";
		for(int j=1;j<=row-i;j++)cout<<" ";
		for(int j=1;j<=row-i;j++)cout<<" ";
		for(int j=1;j<=i;j++)cout<<"*";
		cout<<endl;
	}

}

void downleft(int row)
{
	for(int i=0;i<row;i++)
	{
		for(int k=1;k<=row-i;k++ )cout<<"*";
		for(int l=1;l<=i;l++)cout<<" ";
		for(int l=1;l<=i;l++)cout<<" ";
		for(int k=1;k<=row-i;k++ )cout<<"*";
			cout<<endl;

	}

}
int main()
{
	cout<<"Solid Butterfly : ";
	gap;
	cout<<"Enter the size of Butterfly : ";
	int row;
	cin>>row;
	gap;
	upleft(row);
	//upright(row);
	downleft(row);
	//downright(row);
	gap;
	return 0;

}
/*OUTPUT
PS D:\AC> g++ pattern20.cpp
PS D:\AC> .\a.exe
Solid Butterfly :

Enter the size of Butterfly : 10


*                  *
**                **
***              ***
****            ****
*****          *****
******        ******
*******      *******
********    ********
*********  *********
********************
********************
*********  *********
********    ********
*******      *******
******        ******
*****          *****
****            ****
***              ***
**                **
*                  *

*/
