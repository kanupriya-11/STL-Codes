#include <bits/stdc++.h>
using namespace std;

int main()
{

    bitset<10> n;
    n[3] = 1;
    for (int i = 0; i < 10; i++)
    {
        cout << n.test(i) << " ";
    }
    cout << endl;

    cout << n.count() << endl;
    cout << n.size() << endl;
    cout << n.any() << endl;
    cout << n.none() << endl;
    cout << n.all() << endl;

    bitset<10> b(12);
    cout << b << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << b.test(i) << " ";
    }
    cout << endl;

    cout << b.count() << endl;
    cout << b.size() << endl;
    cout << b.any() << endl;
    cout << b.none() << endl;
    cout << b.all() << endl;

    bitset<10> c(20);
    cout << b << endl;

    b.set();
    cout << b << endl;

    b.set(3, 0);
    cout << b << endl;

    b.reset(2);
    cout << b << endl;

    b.reset();
    cout << b << endl;

    b.flip(1);
    cout << b << endl;

    b.flip();
    cout << b << endl;

    return 0;
}