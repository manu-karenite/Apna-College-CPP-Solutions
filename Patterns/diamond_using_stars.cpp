#include <iostream>
using namespace std;

void solveUpper(int n)
{
	int j;
	for(int i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			cout<<" ";
		for(;j<=n;j++)
			cout<<"*";

		for(int k=i-1;k>0;k--)
			cout<<"*";
		
			cout<<endl;
	}
}
void solveLower(int n)
{
	for(int i=1;i<=n;i++)
	{
		//space first
		int k;
		for(k=1;k<i;k++)
			cout<<" ";
		//k+space = n;
		for(;k<=n;k++)
			cout<<"*";

		//second round for stars
		for(int p=n-i;p>0;p--)
			cout<<"*";
		cout<<endl;

	}
}

void solve(int n)
{
	//create spaces first no of space +  star = n  for first part
	solveUpper(n);
	solveLower(n);

}
int main()
{
	cout<<"Pattern of 2n Diamond using n : "<<endl<<endl;
	int n;
	cout<<"Enter the number of rows : ";
	cin>>n;
	cout<<endl;

	solve(n);
	return 0;
}

/*OUTPUT
PS D:\AC> g++ pattern13.cpp
PS D:\AC> .\a.exe
Pattern of 2n Diamond using n :

Enter the number of rows : 15

              *
             ***
            *****
           *******
          *********
         ***********
        *************
       ***************
      *****************
     *******************
    *********************
   ***********************
  *************************
 ***************************
*****************************
*****************************
 ***************************
  *************************
   ***********************
    *********************
     *******************
      *****************
       ***************
        *************
         ***********
          *********
           *******
            *****
             ***
              *
              
              */
