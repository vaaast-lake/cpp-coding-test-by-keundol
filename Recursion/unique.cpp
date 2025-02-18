#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> s{4, 3, 3, 5, 1, 2, 3, 4, 4};
  // unique는 최종적으로 다음 값과 비교했을 때 중복이 없는 위치를 반환한다.
  // erase - 해당 위치를 시작점으로, 뒤의 값들은 지워준다.
  s.erase(unique(s.begin(), s.end()), s.end());
  for (int i : s)
    cout << i << " ";
  cout << '\n';

  // unique의 동작방식 때문에 선정렬 후 erase를 해야 중복없는 배열을 생성할 수 있다.
  vector<int> s2{4, 3, 3, 5, 1, 2, 3};
  sort(s2.begin(), s2.end());
  s2.erase(unique(s2.begin(), s2.end()), s2.end());
  for (int i : s2)
    cout << i << " ";
  cout << '\n';
  return 0;
}

/*
 4 3 5 1 2 3
 1 2 3 4 5
 */

// int main()
// {
//   std::vector<int> v = {1, 1, 2, 2, 3, 4, 3, 4, 5};
//   auto it = std::unique(v.begin(), v.end());

//   // unique 후의 벡터 내용 출력
//   std::cout << "valid items: ";
//   for (auto iter = v.begin(); iter != it; ++iter)
//   {
//     std::cout << *iter << " "; // 1 2 3 4 3 4 5 출력
//   }

//   std::cout << '\n';

//   std::cout << "iter" << *it << '\n';

//   for (auto iter = it; iter != v.end(); ++iter)
//   {
//     std::cout << *iter << " ";
//   }

//   std::cout << '\n' << '\n';

//   // iterator의 위치 확인
//   std::cout << "\ndistance from return iter: "
//             << std::distance(v.begin(), it); // 7 출력
// }