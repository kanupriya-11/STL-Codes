#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void display(array<int, 5> &a)
{
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{

    array<int, 5> arr;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    display(arr);

    cout << endl;

    auto it = arr.data();
    it++;
    cout << *it;

    cout << endl;

    sort(arr.begin(), arr.end());

    display(arr);

    cout << endl;

    arr.fill(10);

    display(arr);

    return 0;
}