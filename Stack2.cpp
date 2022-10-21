#include <bits/stdc++.h>

using namespace std;

class Stack
{
    int top;
    int a[1000];

public:
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void display();
};

bool Stack::push(int x)
{
    if (top >= (1000 - 1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " pushed into stack" << endl;
        return true;
    }

    void Stack::display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    return 0;
}