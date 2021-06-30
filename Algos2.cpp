#include <bits/stdc++.h>
#include <vector>
using namespace std;

void fun(int a)
{
    cout << a + 1 << " ";
}

int main()
{

    vector<int> v1 = {1, 2, 3, 5, 5, 6, 7, 9};
    vector<int> v2(5, 10);

    for_each(v1.begin(), v1.end(), fun);
    cout << endl;

    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    auto it1 = max_element(v1.begin(), v1.end());
    cout << *it1 << endl;
    auto it2 = min_element(v1.begin(), v1.end());
    cout << *it2 << endl;

    cout << max(1, 2) << " " << max({1, 2, 3, 4}) << endl;
    cout << min(1, 2) << " " << min({1, 2, 3, 4}) << endl;

    vector<int> v3(10);
    auto it3 = adjacent_difference(v1.begin(), v1.end(), v3.begin());
    v3.resize(it3 - v3.begin());
    for (auto i : v3)
    {
        cout << i << " ";
    }
    cout<<endl;

    auto it4 = adjacent_difference(v1.begin(), v1.end(), v3.begin(), multiplies<int>()); // we can write our custom function
    v3.resize(it4 - v3.begin());
    for (auto i : v3)
    {
        cout << i << " ";
    }
    cout << endl;

    auto it5 = adjacent_find(v1.begin(), v1.end()); // we can write our custom function
    cout << *it5;

    return 0;
}