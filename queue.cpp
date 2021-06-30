#include <iostream>
#include <queue>
using namespace std;

void display(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{

    queue<int> q1;

    for (int i = 0; i < 10; i++)
    {
        q1.push(i + 1);
    }

    display(q1);
    display(q1); // display as we are passing it as call by value not by pass by reference

    cout << q1.size()<<endl;

    queue<int> q2 = q1;

    q1.pop();
    q1.pop();

    display(q1);
    display(q2);

    q1.swap(q2);

    display(q1);
    display(q2);

    return 0;
}