#include <deque>
#include <iostream>
using namespace std;

void display(deque<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop_front();
    }
    cout<<endl;
}

int main()
{

    deque<int> q1;
    deque<int> q2(4, 5);
    deque<int> q3 = {1, 2, 3, 4, 5};
    deque<int> q4 = q3;

    display(q3);
    cout << q3.size() << " " << q3.max_size() << endl;
    q3.resize(3);
    display(q3);

    q1.push_back(1);
    q1.push_back(2);
    q1.push_back(3);
    q1.push_back(4);

    q1.push_front(5);
    q1.push_front(6);
    q1.push_front(7);

    display(q1);

    q1.pop_front();
    q1.pop_back();

    display(q1);

    display(q2);
    display(q3);

    q2.swap(q3);
    
    display(q2);
    display(q3);

    auto it = q3.cbegin(); // returns iterator to the begin but we cant modify its value
    it++;
    cout << *it<<endl;

    //Implement stack using deque

    q1.push_back(1);
    q1.push_back(2);
    q1.push_back(3);
    q1.push_back(4);

    while (!q1.empty())
    {
        cout << q1.back() << " ";
        q1.pop_back();
    }
    cout<<endl;

    // Interview problem
    // given n and k find next term as the product of prev k terms till n numbers

    int n, k;
    cin >> n >> k;
    int pro = 1;
    int a[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
        pro *= a[i];
    }
    deque<int> q(a, a + k);
    q.push_back(pro);
    display(q);
    for (int i = k; i < n; i++)
    {
        int next = (q.back() * q.back()) / q.front();
        cout << next << " ";
        q.push_back(next);
        q.pop_front();
    }

    return 0;
}