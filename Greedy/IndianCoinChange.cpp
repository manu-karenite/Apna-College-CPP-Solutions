/*Find minimum number of denominations required to get the change of inputted number
Available: 2000,1000,500,200,100,50,20,10,5,2,1
*/
#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int arr[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        int curr_denomination = arr[i];
        int quot = n / arr[i];

        count += quot;
        n -= quot * arr[i];
        if (n == 0)
            break;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter the value of denomination : ";
    cin >> n;

    int minimumCount = solve(n);
    cout << "Maximum number of currency required are: " << minimumCount;
    return 0;
}

/*Output
PS C:\Users\manuk\Desktop\8086> cd "c:\Users\manuk\Desktop\8086\" ; if ($?) { g++ indianCoin.cpp -o indianCoin } ; if ($?) { .\indianCoin }
Enter the value of denomination : 4       
Maximum number of currency required are: 2
PS C:\Users\manuk\Desktop\8086> cd "c:\Users\manuk\Desktop\8086\" ; if ($?) { g++ indianCoin.cpp -o indianCoin } ; if ($?) { .\indianCoin }
Enter the value of denomination : 54
Maximum number of currency required are: 3
PS C:\Users\manuk\Desktop\8086> cd "c:\Users\manuk\Desktop\8086\" ; if ($?) { g++ indianCoin.cpp -o indianCoin } ; if ($?) { .\indianCoin }
Enter the value of denomination : 55
Maximum number of currency required are: 2
PS C:\Users\manuk\Desktop\8086>
*/
