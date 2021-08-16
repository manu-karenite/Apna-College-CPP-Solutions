#include <iostream>
#include <algorithm>
#include <climits>

#define gap cout<<endl<<endl
using namespace std;

int longestArithmeticSubArray(int *arr,int size)
{
	int ans =2;
	int diff = arr[1]-arr[0];
	int j=2;
	int curr=2;

	while(j<size)
	{
		if((arr[j]-arr[j-1])==diff)curr++;
		else
		{
			diff=arr[j]-arr[j-1];
			curr=2;
		}
		ans = max(ans,curr);
		j++;
	}	
	return ans;



}

int main()
{
	cout<<"Longest Arithmetic Subarray : "<<endl;
	gap;
	cout<<"Enter the size : ";
	int size;
	cin>>size;

	int *arr = new int[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the numbers : ";
		cin>>arr[i];
	}

	gap;
	 int ans = longestArithmeticSubArray(arr,size);
	 cout<<"answer -> "<<ans;
	
	 gap;
	 delete arr;
	 return 0;
}

/*OUTPUT
PS D:\AC\functions> .\a.exe
Longest Arithmetic Subarray :


Enter the size : 5
Enter the numbers : 0
Enter the numbers : 1
Enter the numbers : 2
Enter the numbers : 3
Enter the numbers : 8


answer -> 4

PS D:\AC\functions> .\a.exe
Longest Arithmetic Subarray :


Enter the size : 5
Enter the numbers : 1
Enter the numbers : 2
Enter the numbers : 4
Enter the numbers : 6
Enter the numbers : 8


answer -> 4
*/
