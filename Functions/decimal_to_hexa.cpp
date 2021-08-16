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
  case 8:
    return "8";
  case 9:
    return "9";
  case 10:
    return "A";
  case 11:
    return "B";
  case 12:
    return "C";
  case 13:
    return "D";
  case 14:
    return "E";
  case 15:
    return "F";
  }
}
string solve(ll num) {
  string output = "";
  if (num == 0)
    return "0";
  while (num > 0) {
    int rem = num % 16;
    string toConcat = convert(rem);
    output = output + toConcat;
    num = num / 16;
  }
  reverse(output.begin(), output.end());
  return output;
}

int main() {
  cout << "Decimal to Hexadecimal Conversion : ";
  gap;
  ll num;
  cout << "Enter the Number to convert : ";
  cin >> num;
  string ans = solve(num);
  cout << endl;
  cout << num << " is converted to Hexadecimal as " << ans << " !";
  gap;
  return 0;

}

/*OUTPUT
PS D:\AC\functions> .\a.exe
Decimal to Hexadecimal Conversion :

Enter the Number to convert : 45

45 is converted to Hexadecimal as 2D !

PS D:\AC\functions> .\a.exe
Decimal to Hexadecimal Conversion :

Enter the Number to convert : 78

78 is converted to Hexadecimal as 4E !

PS D:\AC\functions> .\a.exe
Decimal to Hexadecimal Conversion :

Enter the Number to convert : 255

255 is converted to Hexadecimal as FF !

PS D:\AC\functions> .\a.exe
Decimal to Hexadecimal Conversion :

Enter the Number to convert : 1024

1024 is converted to Hexadecimal as 400 !
*/
