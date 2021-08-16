#include <iostream>
using namespace std;
#define gap cout<<endl<<endl


void solveUp(int row)
{
//it means row + space + space + row for every row
//initial space -> 0
//initial stars -> row;

int space=0;
int star=row;
for(int i=1;i<=row;i++) //for number of rows
{
	for(int i=1;i<=star;i++)cout<<"*";
	for(int i=1;i<=space;i++)cout<<" ";
	for(int i=1;i<=space;i++)cout<<" ";
	for(int i=1;i<=star;i++)cout<<"*";

	//things to change
	star--;
	space++;

	cout<<endl;
	}
}

void solveDown(int row)
{
	int star = 1;
	int space = row-1;
	for(int p=1;p<=row;p++){
	for(int i=1;i<=star;i++) cout<<"*";
	for(int i=1;i<=space;i++)cout<<" ";
	for(int i=1;i<=space;i++)cout<<" ";
	for(int i=1;i<=star;i++) cout<<"*";

	cout<<endl;
	star++;
	space--;
}


}

void solve(int row)
{
	solveUp(row);
	solveDown(row);
}

int main()
{
	cout<<"Hollow Diamond inscribed in a rectangle : ";
	gap;
	int row;
	cout<<"Enter number of rows : ";
	cin>>row;

	solve(row);
	return 0;
}

/*OUTPUT
PS D:\AC> g++ pattern15.cpp
PS D:\AC> .\a.exe
Hollow Diamond inscribed in a rectangle :

Enter number of rows : 10
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
*/
