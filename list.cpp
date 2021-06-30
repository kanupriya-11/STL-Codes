#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator it; //auto
    for (it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{

    list<int> a = {1, 2, 3, 4, 5, 6, 7};
    list<int> b(3);
    list<int> c(3, 4);
    list<int> d(c);
    list<int> e(a.begin(), a.end());
    list<int> f = {6, 8};

    cout << a.front() << " " << a.back() << endl;

    display(a);

    for (auto it = a.rbegin(); it != a.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    c.clear();
    cout << c.empty() << endl;

    display(c);
    display(d);

    b.push_back(5);
    b.push_front(3);
    display(b);

    e.pop_back();
    e.pop_front();
    display(e);

    list<int>::iterator it = a.begin();
    a.erase(++it);
    display(a);

    a.erase(++a.begin(), a.end());
    display(a);

    list<int>::iterator it1 = a.begin();
    it1++;
    a.insert(it1, 8);
    display(a);
    it1++;
    it1++;
    a.insert(it1, 5, 9);
    display(a);
    c.insert(c.end(), a.begin(), a.end());
    display(c);

    cout << a.size() << " " << a.max_size() << endl;

    a.merge(f);
    display(a);

    a.remove(6);
    display(a);

    a.swap(f);
    display(a);
    display(f);

    return 0;
}