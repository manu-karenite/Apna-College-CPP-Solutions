#include <bits/stdc++.h>

#define gap cout << endl << endl
using namespace std;

pair < int, int > isValid(char ch) {
  pair < bool, int > p;
  int ascii = ch;
  if ((ascii >= 48 && ascii <= 57) || (ascii >= 65 && ascii <= 70)) {
    p.first = true;
    if (ascii >= 48 && ascii <= 57)
      p.second = ascii - 48;
    else
      p.second = ascii - 65 + 10;
  } else {
    p.first = false;
    p.second = INT_MIN;
  }

  return p;
}

int solve(string hex) {
  long long int sum = 0;
  int power = 0;
  int leng = hex.length();
  for (int i = leng - 1; i >= 0; i--) {
    char ch = hex[i];
    pair < bool, int > p = isValid(ch);
    if (p.first == false) {
      cout << "Not a valid HexaDecimal Number entered!" << endl;
      return INT_MIN;
    }
    //otherwise
    sum += pow(16, power++) * (p.second);

  }
  return sum;
}
int main() {
  cout << "HexaDecimal to Decimal Conversion : ";
  gap;
  string hex;
  cout << "Enter the HexaDecimal Number : ";
  cin >> hex;
  cout << endl;
  cout << hex << " is equal to " << solve(hex) << " in decimal!";
  gap;
  return 0;
}
/*OUTPUT
PS D:\AC\functions> .\a.exe
HexaDecimal to Decimal Conversion :

Enter the HexaDecimal Number : E

E is equal to 14 in decimal!

PS D:\AC\functions> .\a.exe
HexaDecimal to Decimal Conversion :

Enter the HexaDecimal Number : 14

14 is equal to 20 in decimal!

PS D:\AC\functions> .\a.exe
HexaDecimal to Decimal Conversion :

Enter the HexaDecimal Number : AAA

AAA is equal to 2730 in decimal!

PS D:\AC\functions> .\a.exe
HexaDecimal to Decimal Conversion :

Enter the HexaDecimal Number : 987G

Not a valid HexaDecimal Number entered!
987G is equal to -2147483648 in decimal!
*/
