#include <iostream>
using namespace std;

int main()
{
  int n, i, b, c;
  cin >> n;
  if (n <= 0) {
    b = n;
    c = 1;
  } else {
     c = n;
     b = 1;
  }
  int sum = 0;
  for (i = b; i <= c; i++) {
    sum = sum + i;
  }
  cout << sum << endl;
  return 0;
}