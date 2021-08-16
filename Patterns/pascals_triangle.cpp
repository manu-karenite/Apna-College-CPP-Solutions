/*output
PS D:\AC> g++ pattern22.cpp
PS D:\AC> .\a.exe
Pascal's Triangle :

Enter 1 for number of rows, or 2 for any specific row , or 3 for any particular element : 3


Enter the row number : 4
Enter Column Number : 3
Required Pascal[4][3] value is : 3

PS D:\AC> .\a.exe
Pascal's Triangle :

Enter 1 for number of rows, or 2 for any specific row , or 3 for any particular element : 2


Enter the row number : 8
1  7  21  35  35  21  7  1

PS D:\AC> .\a.exe
Pascal's Triangle :

Enter 1 for number of rows, or 2 for any specific row , or 3 for any particular element : 1


Enter the row number : 7
            1
          1  1
        1  2  1
      1  3  3  1
    1  4  6  4  1
  1  5  10  10  5  1
1  6  15  20  15  6  1


*/


#include <iostream>
using namespace std;
#define gap cout<<endl<<endl

long long int getFact(long long int n)
{
	if(n==0)
		return 1;
	return (n*getFact(n-1));
}
void element()
{
	cout<<"Enter the row number : ";
	int row,column;
	cin>>row;
	if(row<1)
		{cout<<"Invalid Row Number..!";return;}
	cout<<"Enter Column Number : ";
	cin>>column;
	if(column>row || column<1)
		{cout<<"Invalid Column Number..!";return;}

	cout<<"Required Pascal["<<row<<"]["<<column<<"] value is : ";
	//ans = r-1 C c-1
	int fact1 = getFact(row-1);
	int fact2 = getFact(column-1);
	int fact3 = getFact(row-column);
	cout<<(fact1/fact2)/fact3;
}

void rowfilm()
{
	cout<<"Enter the row number : ";
	int row;
	cin>>row;
	if(row<1)
		{cout<<"Invalid Row Number..!";return;}
	//means row is valid
	int i = row;
	int coef = 1;
	for(int p=1;p<=i;p++) //to print that number of times : 
	{
		cout<<coef<<"  ";
		coef = coef*(i-p)/p;
	}

}

void pattern()
{
	cout<<"Enter the row number : ";
	int row;
	cin>>row;
	if(row<1)
		{cout<<"Invalid Row Number..!";return;}
	int space = row-1;
	for(int i=1;i<=row;i++)
	{
		for(int p=1;p<=space;p++)
			cout<<"  ";
		space--;
		int coef = 1;
		for(int p=1;p<=i;p++) //to print that number of times : 
		{
			cout<<coef<<"  ";
			coef = coef*(i-p)/p;
		}
		cout<<endl;


	}
}

int main()
{
	cout<<"Pascal's Triangle : ";
	gap;
	cout<<"Enter 1 for number of rows, or 2 for any specific row , or 3 for any particular element : ";
	int choice;
	cin>>choice;
	gap;
	switch(choice)
	{
		case 1 : {pattern();break;}
		case 2 : {rowfilm();break;}
		case 3 : {element();break;}
	}
	gap;
	return 0;


}
