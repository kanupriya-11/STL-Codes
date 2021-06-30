#include <iostream>
#include <queue>
using namespace std;
template <class T>

void display(priority_queue<T> q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

void display(priority_queue<int, vector<int>, greater<int>> q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

class Compare
{
public:
    bool operator()(int a, int b)
    {
        return (a > b);
    }
};

void display(priority_queue<int, vector<int>, Compare> q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{

    priority_queue<int> q1;
    priority_queue<char> q2;

    for (int i = 0; i < 11; i++)
    {
        q1.push(i);
    }
    display(q1);
    display(q1); // we can do this as copy of q1 is passed through the function

    q2.push('a');
    q2.push('x');
    q2.push('s');
    q2.push('t');
    q2.push('m');
    display(q2);

    priority_queue<int, vector<int>, greater<int>> q3;
    for (int i = 0; i < 6; i++)
    {
        q3.push(i);
    }
    display(q3);

    priority_queue<int, vector<int>, Compare> q4;
    q4.push(10);
    q4.push(5);
    q4.push(2);
    q4.push(20);
    q4.push(23);
    display(q4);

    // Interview problem
    // in infinite series find kth largest element of the previous series and print it

    int n, k;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> q;
    int a[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
        q.push(a[i]);
    };
    cout << "Queue is : ";
    display(q);
    cout << k << " largest element is : " << q.top() << endl;

    for (int i = k; i < n; i++)
    {
        int t;
        cin >> t;
        if (t <= q.top())
        {
            cout << "Queue is : ";
            display(q);
            cout << k << " largest element is : " << q.top() << endl;
            continue;
        }
        else
        {
            q.push(t);
            cout << "Queue is : ";
            display(q);
            q.pop();
            cout << k << " largest element is : " << q.top() << endl;
        }
    }

    return 0;
}