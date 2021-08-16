#include <iostream>
#include <cmath>
using namespace std;

bool solve(int &n)
{
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
      return false;

  }
  return true;
}
int main()
{
  cout<<"Enter a number to check : ";
  int var;
  cin>>var;

  bool answer = solve(var);
  if(answer) cout<<"Prime Number";
  else cout<<"Not a Prime Number ! ";
  return 0;
  
}

/*OUTPUT
PS D:\AC> g++ 1_checkPrime.cpp
PS D:\AC> .\a.exe
Enter a number to check : 45
Not a Prime Number !
PS D:\AC> .\a.exe
Enter a number to check : 1
Prime Number
PS D:\AC> .\a.exe
Enter a number to check : 37
Prime Number
*/
