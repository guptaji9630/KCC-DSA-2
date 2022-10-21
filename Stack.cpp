#include <bits/stdc++.h>

using namespace std;
#define MAX 1000

// implement a stack using array
class Stack
{
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    bool push(int x);
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " pushed into stack";
        return true;
    }
}

int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    return 0;
}