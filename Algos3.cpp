#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define FOR(i, a, n) for (int i = a; i < n; i++)

void display(vector<int> v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v1 = {1, 2, 6, 7, 9};
    display(v1);

    vector<int> v2 = {3, 5, 7, 8, 9};
    display(v2);

    vector<int> v3(10);
    auto i = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    v3.resize(i - v3.begin());
    display(v3);

    vector<int> v4(10);
    auto j = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());
    v4.resize(j - v4.begin());
    display(v4);

    vector<int> v5(10);
    auto k = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v5.begin());
    v5.resize(k - v5.begin());
    display(v5);

    vector<int> v6(10);
    auto l = set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v6.begin());
    v6.resize(l - v6.begin());
    display(v6);

    return 0;
}