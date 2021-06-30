#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &v)
{
    vector<int>::iterator it; //auto
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    vector<int> v;
    vector<int> v1 = {0, 1, 2, 3, 4};
    vector<int> v2 = {5, 6, 7, 8, 9};
    display(v2);
    v.reserve(1000);
    for (int i = 1; i <= 9; i++)
    {
        v.push_back(i);
        cout << v.size() << " " << v.capacity() << " " << v.max_size() << endl;
    }
    v.resize(7);

    cout << v1.at(2) << " " << v1.front() << " " << v1.back() << endl;
    ;

    vector<int>::reverse_iterator i;
    for (i = v1.rbegin(); i != v1.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    v1.clear();
    cout << v1.size() << " " << v1.capacity();

    auto it = v2.begin() + 3;
    v2.erase(it);
    display(v2);
    v2.erase(v2.begin(), v2.begin() + 3);
    display(v2);
    cout << v2.size() << " " << v2.capacity() << endl;

    auto it1 = v1.begin() + 3;
    v1.insert(it1, 6);
    display(v1);
    v1.insert(v1.begin() + 1, 5, 10);
    display(v1);
    v2.insert(v2.end(), v1.begin(), v1.end());
    display(v2);

    v.assign(10, 42);
    display(v);
}