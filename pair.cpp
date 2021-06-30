#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int, int>
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define mp make_pair
#define pb push_back

void display(vector<pair<int, pi>> &a)
{
    FOR(i, 0, a.size())
    {
        cout << '(' << a[i].F << ", (" << a[i].S.F << ", " << a[i].S.S << "))"
             << " , ";
    }
    cout << endl;
}

void display(vector<pi> &a)
{
    FOR(i, 0, a.size())
    {
        cout << '(' << a[i].F << "," << a[i].S << ")"
             << " , ";
    }
    cout << endl;
}

bool sortFirstDes(pi &a, pi &b)
{
    return a.F > b.F;
}

bool sortSecondAsc(pi &a, pi &b)
{
    return a.S < b.S;
}

bool sortSecondDes(pi &a, pi &b)
{
    return a.S > b.S;
}

bool sortFirstDesSecondDes(pi &a, pi &b)
{
    if (a.F == b.F)
        return a.S > b.S;
    return a.F > b.F;
}

int main()
{

    pi p1;
    p1.F = 3;
    p1.S = 6;
    cout << p1.F << " " << p1.S << endl;

    vector<pi> v1;
    v1.pb(mp(1, 3));
    v1.pb(mp(2, 4));
    v1.pb({6, 8});
    v1.pb({9, 0});
    v1.pb({3, 5});
    v1.pb({4, 2});

    display(v1);

    sort(v1.begin(), v1.end()); // sort in ascending order acc to first value
    display(v1);

    sort(v1.begin(), v1.end(), sortFirstDes); // sort in descending order acc to first value
    display(v1);

    sort(v1.begin(), v1.end(), sortSecondAsc); // sort in ascending order acc to second value
    display(v1);

    sort(v1.begin(), v1.end(), sortSecondDes); // sort in descending order acc to second value
    display(v1);

    v1.pb(mp(1, 4));
    v1.pb(mp(2, 8));
    v1.pb({6, 7});
    v1.pb({9, 7});
    v1.pb({3, 6});
    v1.pb({4, 1});

    display(v1);

    sort(v1.begin(), v1.end(), sortFirstDesSecondDes); // sort in descending order acc to first value , if equal comes sort in ascending to the second

    display(v1);

    vector<pair<int, pi>> v2;
    v2.pb({1, {2, 3}});
    v2.pb(mp(1, mp(2, 4)));
    v2.pb({4, {6, 33}});
    v2.pb({13, {4, 6}});
    v2.pb({6, {23, 4}});

    display(v2);

    return 0;
}