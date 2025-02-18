#include <bits/stdc++.h>
using namespace std;

// int i;
// int main()
// {
//   // 0x7ff75c1a7030
//   cout << &i << '\n';
//   i = 0;
//   // 0x7ff75c1a7030
//   cout << &i << '\n';
//   return 0;
// }

// int a = 4;
// double c = 4.4;

// int main()
// {
//   // 0x7ff6b23b3000
//   cout << &a << '\n';

//   // <type> *<value name> = <address>
//   // type은 저장한 변수의 타입과 일치
//   // * - asterisk operator
//   int *b = &a;

//   // 0x7ff6b23b3000
//   cout << b << '\n';

//   // pointer는 주소를 저장하기 때문에 어떤 변수의 포인터든 동일함
//   // 단 OS의 bit에 따라 달라짐. 32bit = 4byte, 64bit = 8byte
//   double *d = &c;
//   cout << sizeof(b) << '\n';
//   cout << sizeof(d) << '\n';

//   return 0;
// }

// int main()
// {
//   string a = "kundol";
//   string *b = &a;
//   // 0x84dfbff960
//   cout << b << '\n';
//   // kundol
//   cout << *b << '\n';
//   return 0;
// }

int a[3] = {1, 2, 3};

int main()
{
  int *c = a;
  // 0x7ff746bd3000
  cout << c << '\n';
  // 0x7ff746bd3000
  cout << &a[0] << '\n';
  // 0x7ff746bd3004
  cout << c + 1 << '\n';
  // 0x7ff746bd3004
  cout << &a[1] << '\n';
  // 2
  cout << *(c + 1) << '\n';
  // 2
  cout << *&a[1] << '\n';
  return 0;
}