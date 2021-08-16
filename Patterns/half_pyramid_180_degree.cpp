#include <iostream>
using namespace std;
void solve(int n)
{
	char space=' ';
	char star = '*';
	for(int i=1;i<=n;i++)
	{
		//space +  star ==n
		for(int j=1;j<=n-i;j++)
			cout<<space;
		for(int j=n-i+1;j<=n;j++)
			cout<<star;
		cout<<endl;
	}
}
int main()
{
	cout<<"Half Pyramid after 180 degree rotation : "<<endl<<endl;
	int n;
	cout<<"Enter number of lines : ";
	cin>>n;

	solve(n);
	return 0;

}

/*OUTPUT
PS D:\AC> g++ pattern5.cpp
PS D:\AC> .\a.exe
Half Pyramid after 180 degree rotation :

Enter number of lines : 13
            *
           **
          ***
         ****
        *****
       ******
      *******
     ********
    *********
   **********
  ***********
 ************
*************
*/
