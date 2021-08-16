#include <bits/stdc++.h>

#define gap cout << endl << endl
#define ll long long int
using namespace std;

string convert(short int rem) {
  switch (rem) {
  case 0:
    return "0";
  case 1:
    return "1";
  case 2:
    return "2";
  case 3:
    return "3";
  case 4:
    return "4";
  case 5:
    return "5";
  case 6:
    return "6";
  case 7:
    return "7";
  }
}
string solve(ll num) {
  string output = "";
  if (num == 0)
    return "0";
  while (num > 0) {
    int rem = num % 8;
    string toConcat = convert(rem);
    output = output + toConcat;
    num = num / 8;
  }
  reverse(output.begin(), output.end());
  return output;
}

int main() {
  cout << "Decimal to Octal Conversion : ";
  gap;
  ll num;
  cout << "Enter the Number to convert : ";
  cin >> num;
  string ans = solve(num);
  cout << endl;
  cout << num << " is converted to octal as " << ans << " !";
  gap;
  return 0;

}
/*output
PS D:\AC\functions> .\a.exe
Decimal to Octal Conversion :

Enter the Number to convert : 14

14 is converted to octal as 16 !

PS D:\AC\functions> .\a.exe
Decimal to Octal Conversion :

Enter the Number to convert : 10

10 is converted to octal as 12 !

PS D:\AC\functions> .\a.exe
Decimal to Octal Conversion :

Enter the Number to convert : 7

7 is converted to octal as 7 !

PS D:\AC\functions> .\a.exe
Decimal to Octal Conversion :

Enter the Number to convert : 1475

1475 is converted to octal as 2703 !
*/
