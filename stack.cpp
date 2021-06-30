#include <iostream>
#include <stack>
using namespace std;
template <class T>

void display(stack<T> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{

    stack<int> s1;

    for (int i = 0; i < 10; i++)
    {
        s1.push(i + 1);
    }
    display(s1);

    stack<int> s2 = s1;

    cout << s1.empty() << endl;

    s1.pop();
    s1.pop();
    display(s1);

    cout << s1.size() << endl;

    s1.swap(s2);
    display(s1);
    display(s2);

    return 0;
}