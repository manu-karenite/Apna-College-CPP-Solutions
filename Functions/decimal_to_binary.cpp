#include <bits/stdc++.h>

#define gap cout << endl << endl
#define ll long long int
using namespace std;

string convert(short int rem) {
  if (rem == 0)
    return "0";
  else
    return "1";
}
string solve(ll num) {
  string output = "";
  if (num == 0) return "0";
  while (num > 0) {
    int rem = num % 2;
    string toConcat = convert(rem);
    output = output + toConcat;
    num = num / 2;
  }
  reverse(output.begin(), output.end());
  return output;
}

int main() {
  cout << "Decimal to Binary Conversion : ";
  gap;
  ll num;
  cout << "Enter the Number to convert : ";
  cin >> num;
  string ans = solve(num);
  cout << endl;
  cout << num << " is converted to binary as " << ans << " !";
  gap;
  return 0;

}
/*OUTPUT
PS D:\AC\functions> .\a.exe
Decimal to Binary Conversion :

Enter the Number to convert : 14

14 is converted to binary as 1110 !

PS D:\AC\functions> .\a.exe
Decimal to Binary Conversion :

Enter the Number to convert : 1

1 is converted to binary as 1 !

PS D:\AC\functions> .\a.exe
Decimal to Binary Conversion :

Enter the Number to convert : 0

0 is converted to binary as 0 !

PS D:\AC\functions> .\a.exe
Decimal to Binary Conversion :

Enter the Number to convert : 8

8 is converted to binary as 1000 !

PS D:\AC\functions> .\a.exe
Decimal to Binary Conversion :

Enter the Number to convert : 69874

69874 is converted to binary as 10001000011110010 !

PS D:\AC\functions> .\a.exe
Decimal to Binary Conversion :

Enter the Number to convert : 30

30 is converted to binary as 11110 !
*/
