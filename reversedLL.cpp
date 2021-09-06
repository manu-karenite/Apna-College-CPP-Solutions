/*You are given a linked list that contains  integers. You have performed the following reverse operation on the list:

Select all the subparts of the list that contain only even integers. For example, if the list is , then the selected subparts will be , .
Reverse the selected subpart such as  and .
Now, you are required to retrieve the original list.

Sample Input
9
2 18 24 3 5 7 9 6 12
Sample Output
24 18 2 3 5 7 9 12 6
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	int arr[num];
	for(int i=0;i<num;i++)
		cin>>arr[i];
	stack<int> s;
	for(int i=0;i<num;i++)
	{
		if(arr[i]%2==1)
		{
			//check for the stack first
			while(s.size()!=0)
			{
				cout<<s.top()<<" ";
				s.pop();
			}
			cout<<arr[i]<<" ";
		}
		else
		{
			//num is even
			s.push(arr[i]);
		}
	}
	//get the remaiming from stack
	while(s.size()!=0)
			{
				cout<<s.top()<<" ";
				s.pop();
			}
	return 0;

}
