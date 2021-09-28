#include <bits/stdc++.h>
using namespace std;
bool function(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int count(pair<int, int> arr[], int n)
{
    //suppose we have taken 1st task
    int ct = 1;
    int end = arr[0].second;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].first >= end) //task start time is greater than or equsl to current end time
        {
            ct++;
            end = arr[i].second;
        }
    }
    return ct;
}
int main()
{
    int n;
    cout << "Enter the number of activities : ";
    cin >> n;

    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the start time and end time of activity " << (i + 1) << " : ";
        int a, b;
        cin >> a >> b;
        arr[i].first = a;
        arr[i].second = b;
    }
    //input done
    //now we need to sort the array
    sort(arr, arr + n, function);

    int ct = count(arr, n);
    cout << "The number of activities possible are: " << ct << endl;
    return 0;
}

/*
Enter the number of activities : 5
Enter the start time and end time of activity 1 : 1 3
Enter the start time and end time of activity 2 : 2 4
Enter the start time and end time of activity 3 : 3 4
Enter the start time and end time of activity 4 : 8 10
Enter the start time and end time of activity 5 : 9  10
The number of activities possible are: 3
*/
