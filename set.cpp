#include <bits/stdc++.h>
using namespace std;

void display(set<pair<int, int>> s)
{
    for (auto i : s)
    {
        cout << '(' << i.first << "," << i.second << ")"
             << " , ";
    }
    cout << endl;
}

void display(set<int, greater<int>> s)
{
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}

void display(set<int> s)
{
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}

void display(multiset<int> s)
{
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    // ordered set
    set<int> s1;
    set<int> s2 = {1, 3, 4, 2};
    display(s2);

    s1.insert(4);
    s1.insert(5);
    s1.insert(9);
    s1.insert(s2.begin(), s2.end());
    display(s1);

    set<int, greater<int>> s3;
    s3.insert(4);
    s3.insert(5);
    s3.insert(9);
    s3.insert(s2.begin(), s2.end());
    display(s3);

    s1.erase(4);
    auto it = s2.begin();
    it++;
    s2.erase(it);
    auto it1 = s3.begin();
    it1++;
    it1++;
    s3.erase(s3.begin(), it1);
    display(s1);
    display(s2);
    display(s3);

    auto it2 = s1.find(10);
    if (it2 == s1.end())
        cout << "Not present" << endl;
    else
        cout << "Found " << *it << endl;

    set<pair<int, int>> s4;
    s4.insert({1, 2});
    s4.insert({4, 7});
    s4.insert({7, 4});
    s4.insert({3, 2});
    s4.insert({4, 2});
    s4.insert({7, 9});
    display(s4);

    // ordered multiset
    multiset<int> s5;
    s5.insert(4);
    s5.insert(4);
    s5.insert(6);
    s5.insert(7);
    s5.insert(6);
    s5.insert(7);
    s5.insert(1);
    display(s5);
    cout << count(s5.begin(), s5.end(), 4)<<endl;

    // unordered set
    unordered_set<int> s6 = {1, 5, 6, 7, 5, 4, 7, 7, 9};

    for (auto i : s6)
    {
        cout << i << " ";
    }
    cout << endl;

    // unordered multiset
    unordered_multiset<int> s7 = {1, 5, 6, 7, 5, 4, 7, 7, 9};

    for (auto i : s7)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}