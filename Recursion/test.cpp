#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a = {2, 1, 3, 100, 200};
    sort(a.begin(), a.end());
    do
    {
        // for (int i = 0; i < a.size(); i++)
        // {
        //     cout << a[i] << " ";
        // }
        for (int i : a)
            cout << i << " ";
        cout << '\n';
    } while (next_permutation(a.begin(), a.end()));
}
