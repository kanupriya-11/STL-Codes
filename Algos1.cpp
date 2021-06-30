#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> &v)
{
    vector<int>::iterator it; //auto
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}

bool comapare(int a, int b)
{
    return a > b;
}

bool pred(int n)
{
    return n % 2 == 0;
}

int fun1(int i)
{
    return ++i;
}

int fun2(int i, int j)
{
    return i + j;
}

int main()
{

    vector<int> v1 = {5, 2, 1, 4, 3};
    vector<int> v2 = {8, 9, 9, 7, 5, 6};

    display(v1);

    sort(v1.begin(), v1.end(), greater<int>()); // sort(v1.begin() , v1.end() , comapare);
    display(v1);

    stable_sort(v2.begin(), v2.end());
    display(v2);

    sort(v1.begin(), v1.end());
    display(v1);

    if (binary_search(v1.begin(), v1.end(), 2))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    auto it = upper_bound(v1.begin(), v1.end(), 4);
    cout << "Pos : " << (it - v1.begin()) << endl;

    auto it1 = lower_bound(v2.begin(), v2.end(), 9);
    cout << "Pos : " << (it1 - v2.begin()) << endl;

    vector<int> v = {1, 2, 3, 7, 7, 8, 9, 4, 4, 5, 4, 6};
    cout << count(v.begin(), v.end(), 4) << endl;
    cout << count_if(v.begin(), v.end(), pred) << endl;

    auto it2 = find(v.begin(), v.end(), 3);
    cout << (it2 - v.begin()) << endl;

    auto it3 = find_if(v.begin(), v.end(), pred);
    cout << (it3 - v.begin()) << endl;

    vector<int> v3 = {1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 6};
    auto it4 = unique(v3.begin(), v3.end());
    v3.resize(it4 - v3.begin());
    display(v3);

    vector<int> v4(v3.size());
    auto it5 = unique_copy(v3.begin(), v3.end(), v4.begin());
    v4.resize(it5 - v4.begin());
    display(v4);
    display(v3);

    display(v3);
    reverse(v3.begin(), v3.end());
    display(v3);
    reverse_copy(v3.begin(), v3.end(), v4.begin());
    display(v3);
    display(v4);

    display(v3);
    random_shuffle(v3.begin(), v3.end());
    display(v3);

    transform(v3.begin(), v3.end(), v4.begin(), fun1);
    display(v4);

    transform(v2.begin(), v2.end(), v3.begin(), v4.begin(), fun2);
    display(v4);

    display(v3);
    rotate(v3.begin(), v3.begin() + 4, v3.end());
    display(v3);

    rotate_copy(v3.begin(), v3.begin() + 4, v3.end(), v4.begin());
    display(v3);
    display(v4);
    return 0;
}