#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> q;
    for(int i=0;i<4;i++) q.clear();
    q.push_front(2);
    q.push_front(3);
    q.push_front(4);
    q.push_front(5);
    cout<<q.front()<<endl;
    q.pop_front();
    cout<<q.front()<<endl;
    return 0;
}