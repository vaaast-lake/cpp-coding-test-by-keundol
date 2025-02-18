#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string &input, string delimiter)
{
  vector<string> result;
  auto start = 0;
  auto end = input.find(delimiter);
  // string::npos - 문자열에서 특정 문자 또는 문자열을 찾지 못한 경우 반환되는 값으로 사용되는 상수
  // npos는 unsigned이기 때문에 묵시적 형변환으로,
  // -1은 unsigned long long MAX_VALUE와 동일
  while (end != string::npos)
  {
    // substr - 시작과 끝을 부분문자열로 추출출
    result.push_back(input.substr(start, end - start));
    start = end + delimiter.size();
    // find(delimiter, [startpos])
    end = input.find(delimiter, start);
  }
  result.push_back(input.substr(start));
  return result;
}

int main()
{
  string str = "apple->banana->orange->grape";
  vector<string> fruits = split(str, "->");
  for (const string &fruit : fruits)
  {
    cout << fruit << " ";
  }
  return 0;
}