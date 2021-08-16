#include <iostream>
using namespace std;
int main()
{
	cout<<"Hollow Rectangle"<<endl<<endl;

	int row , col;
	cout<<"Enter number of rows : ";  cin>>row;
	cout<<"Enter number of columns : "; cin>>col;

	for(int i=0;i<col;i++)
	{
		cout<<"* "; //printing first row

	}
	cout<<endl;

	for(int i=1;i<row-1;i++)
	{
		cout<<"* ";
		for(int i=1;i<col-1;i++)
			cout<<"  ";
		cout<<"* ";
		cout<<endl;
	}
	for(int i=0;i<col;i++)
	{
		cout<<"* "; //printing first row

	}
	cout<<endl;
	return 0;

}

/*OUTPUT 
PS D:\AC> g++ pattern2.cpp
PS D:\AC> .\a.exe
Hollow Rectangle

Enter number of rows : 12
Enter number of columns : 8
* * * * * * * *
*             *
*             *
*             *
*             *
*             *
*             *
*             *
*             *
*             *
*             *
* * * * * * * *
*/
