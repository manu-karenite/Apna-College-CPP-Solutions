#include <bits/stdc++.h>

#define gap cout << endl << endl
using namespace std;

bool isValid(char ch) {
  int ascii = ch;
  if (ascii >= 48 && ascii <= 55)
    return true;
  return false;
}

int solve(string octal) {
  long long int sum = 0;
  int power = 0;
  int leng = octal.length();
  for (int i = leng - 1; i >= 0; i--) {
    char ch = octal[i];
    bool check = isValid(ch);
    if (check == false) {
      cout << "Not a valid Octal Number entered!" << endl;
      return INT_MIN;
    }
    //otherwise
    sum += pow(8, power++) * ((int) ch - 48);

  }
  return sum;
}
int main() {
  cout << "Octal to Decimal Conversion : ";
  gap;
  string octal;
  cout << "Enter the Octal Number : ";
  cin >> octal;
  cout << endl;
  cout << octal << " is equal to " << solve(octal) << " in decimal!";
  gap;
  return 0;
}

/*OUTPUT
PS D:\AC\functions> .\a.exe
Octal to Decimal Conversion :

Enter the Octal Number : 7

7 is equal to 7 in decimal!

PS D:\AC\functions> .\a.exe
Octal to Decimal Conversion :

Enter the Octal Number : 10

10 is equal to 8 in decimal!

PS D:\AC\functions> .\a.exe
Octal to Decimal Conversion :

Enter the Octal Number : 1479

Not a valid Octal Number entered!
1479 is equal to -2147483648 in decimal!

PS D:\AC\functions> .\a.exe
Octal to Decimal Conversion :

Enter the Octal Number : 69

Not a valid Octal Number entered!
69 is equal to -2147483648 in decimal!
*/
