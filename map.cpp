#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define FOR(i, a, n) for (int i = a; i < n; i++)

void display(map<int, int> m)
{
    for (auto i : m)
    {
        cout << i.first << "   :   " << i.second << endl;
    }
    cout << endl;
}

void display(multimap<int, int> m)
{
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "   :   " << it->second << endl;
    }
    cout << endl;
}

void display(unordered_map<char, char> m)
{
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "   :   " << it->second << endl;
    }
    cout << endl;
}

void display(unordered_multimap<char, char> m)
{
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "   :   " << it->second << endl;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[10];

    // ordered map
    map<int, int> m;
    FOR(i, 0, 10)
    {
        a[i] = i;
        m[a[i]] = i + 1;
    }

    FOR(i, 0, 10)
    {
        cout << a[i] << " : " << m[a[i]] << endl;
    }
    cout<<endl;

    m.insert({1, 2});
    m.insert({3, 4});
    m.insert({0, 2});
    m.insert({7, 2});
    m.insert(make_pair(8, 2));
    m.insert(make_pair(7, 5));
    m[10] = 5;
    m[6] = 4;
    m[7] = 6;
    display(m);

    cout << m[7] << endl;

    for (auto i : m)
    {
        cout << i.second << " ";
    }
    cout<<endl;

    auto it = m.begin();
    it++;
    it++;
    m.erase(m.begin(), it);

    display(m);

    //ordered multimap
    multimap<int, int> n;

    n.insert({3, 2});
    n.insert({4, 4});
    n.insert({0, 2});
    n.insert({7, 2});
    n.insert(make_pair(8, 2));
    n.insert(make_pair(7, 5));
    n.insert({7, 8});
    n.insert({8, 3});
    n.insert({8, 3});
    n.insert({9, 2});
    n.insert({7, 9});

    display(n);

    auto i = n.equal_range(7);
    for (auto it = i.first; it != i.second; it++)
    {
        cout << it->first << "    " << it->second << endl;
    }

    cout << n.count(7) << endl;
    char ch[26];

    //unordered map
    unordered_map<char, char> p;
    FOR(i, 0, 26)
    {
        ch[i] = i + 65;
        p[ch[i]] = i + 97;
    }
    display(p);
    cout << endl;

    //unordered multimap
    unordered_multimap<char, char> q;
    FOR(i, 0, 26)
    {
        q.insert({i + 65, i + 97});
    }

    q.insert({'A', 'd'});
    q.insert({'A', 'k'});
    q.insert({'A', 'd'});
    q.insert({'A', 'k'});

    display(q);

    return 0;
}