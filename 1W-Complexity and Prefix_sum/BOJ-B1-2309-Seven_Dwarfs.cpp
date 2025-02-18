#include <bits/stdc++.h>
using namespace std;

// Permutation
// int a[9];
// int main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);

//   for (int i = 0; i < 9; i++)
//   {
//     cin >> a[i];
//   }

//   sort(a, a + 9);
//   do
//   {
//     // for debuging
//     // for (int i : a)
//     //   cout << i << " ";
//     int sum = 0;
//     for (int i = 0; i < 7; i++)
//       sum += a[i];

//     if (sum == 100)
//       break;
//   } while (next_permutation(a, a + 9));

//   // cout << "\nans" << "\n";
//   for (int i = 0; i < 7; i++)
//   {
//     cout << a[i] << "\n";
//   }
//   return 0;
// }

// Combination
// int a[9], sum;
// vector<int> v;
// pair<int, int> ret;

// void solve()
// {
//   for (int i = 0; i < 9; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       if (sum - a[i] - a[j] == 100)
//       {
//         ret = {i, j};
//         return;
//       }
//     }
//   }
// }

// int main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);
//   for (int i = 0; i < 9; i++)
//   {
//     cin >> a[i];
//     sum += a[i];
//   }
//   // 9C2에서 걸린 두 요소를 ret에 저장
//   solve();
//   // ret 요소를 제외한 값들을 v에 저장
//   for (int i = 0; i < 9; i++)
//   {
//     if (ret.first == i || ret.second == i)
//       continue;
//     v.push_back(a[i]);
//   }
//   sort(v.begin(), v.end());
//   for (int i : v)
//     cout << i << " ";
//   return 0;
// }

// Recursion
int a[9];
int n = 9, r = 7;

void solve()
{
  int sum = 0;
  for (int i = 0; i < r; i++)
  {
    sum += a[i];
  }

  if (sum == 100)
  {
    // cout << "\nDebuging Vector test\n\n";
    sort(a, a + 7);
    cout << "\n\nans\n";
    for (int i = 0; i < r; i++)
      cout << a[i] << "\n";
    // main 함수를 종료
    exit(0);
  }
}

void print()
{
  for (int i = 0; i < r; i++)
    cout << a[i] << " ";
  cout << '\n';
}

void makePermutation(int n, int r, int depth)
{
  if (r == depth)
  {
    print();
    solve();
    return;
  }
  for (int i = depth; i < n; i++)
  {
    cout << "\nswap 1" << "[" << i << "," << depth << "]";
    swap(a[i], a[depth]);
    makePermutation(n, r, depth + 1);
    swap(a[i], a[depth]);
    cout << "\nswap 2" << "[" << i << "," << depth << "]";
  }
  return;
}

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  // cout << "\n\nDebuging Vector test\n\n";
  makePermutation(n, r, 0);
  return 0;
}