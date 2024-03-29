#include<bits/stdc++.h>
using namespace std;

class Queue {
    // contructor
    vector<int> q;
    public:
    int front;
    Queue() {
        front = 0;
    }

    void push(int val) {
        q.push_back(val);
    }

    int size() {
        return q.size() - front;
    }

    int pop() {
        int frontElement = q[front];
        front += 1;
        return frontElement;
    }

    int peek() {
        return q[front];
    }
    int isempty() {
        return size() == 0;
    }

};

class Dequeue {
    list<int> ll;
    public:
    Dequeue() {

    }

    void push_back(int x)
    {
        ll.push_back(x);
    }

    int pop_back() 
    {
        int element = ll.back();
        ll.pop_back();
        return element;
    }

    int peek_back() {
        return ll.back();
    }

    void push_front(int x) 
    {
        ll.push_front();
    }

    int pop_front() {
        int element = ll.front();
        ll.pop_front();
        return element;
    }

    int peek_front() {
        return ll.front();
    }
};
int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.pop();
    return 0;
}