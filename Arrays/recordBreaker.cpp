#include <iostream>
#include <algorithm>
#include <climits>
#define gap cout<<endl<<endl
using namespace std;

int recordBreakerDays(int *arr,int size)
{
	int count=0;
	int maximum = INT_MIN;

	for(int i=0;i<size;i++)
	{
		if(arr[i]>maximum && arr[i]>>arr[i+1])
			count++;
		maximum = max(arr[i],maximum);
	}
	return count;
}
int main()
{
	cout<<"Record Breaker Days : "<<endl;
	gap;
	cout<<"Enter the number of days : ";
	int size;
	cin>>size;

	int *arr = new int[size+1];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the visitors : ";
		cin>>arr[i];
	}
	arr[size]=INT_MIN;
	gap;
	 int count= recordBreakerDays(arr,size);
	 cout<<"Number of record Breaking Days were : "<<count;
	 gap;
	 delete arr;
	 return 0;
}
/*output
PS D:\AC\functions> .\a.exe
Record Breaker Days :


Enter the number of days : 8
Enter the visitors : 1
Enter the visitors : 2
Enter the visitors : 0
Enter the visitors : 7
Enter the visitors : 2
Enter the visitors : 0
Enter the visitors : 2
Enter the visitors : 2


Number of record Breaking Days were : 2
*/
