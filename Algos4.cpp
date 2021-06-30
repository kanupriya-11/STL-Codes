#include <bits/stdc++.h>
using namespace std;

bool pred(int i)
{
    return (i % 2 == 0);
}

void print(vector<int> &v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1 = {1, 3, 5, 2, 4, 6, 8, 7, 9};

    vector<int> v2(10);
    auto it = copy(v1.begin() + 2, v1.end(), v2.begin());
    v2.resize(it - v2.begin());
    print(v2);

    vector<int> v3(10);
    auto it1 = copy_if(v1.begin(), v1.end(), v3.begin(), pred);
    v3.resize(it1 - v3.begin());
    print(v3);

    vector<int> v4(10);
    auto it2 = copy_n(v1.begin() + 1, 5, v4.begin());
    v4.resize(it2 - v4.begin());
    print(v4);

    vector<int> v5(10);
    copy_backward(v1.begin(), v1.end(), v5.end());
    print(v5);

    cout << is_sorted(v1.begin(), v1.end()) << endl;

    auto it3 = is_sorted_until(v1.begin(), v1.end());
    cout << *it3 << endl;

    nth_element(v1.begin(), v1.begin() + 4, v1.end()); 
    cout << v1[4] << endl;

    vector<int> v6(v1);
    partial_sort(v6.begin(), v6.begin() + 3, v6.end());
    print(v6);

    vector<int> v7(20);
    iota(v7.begin(), v7.end(), 0);
    print(v7);

    return 0;
}