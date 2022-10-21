#include<bits/stdc++.h>

using namespace std;

class Stack {
    int top;
    int a[1000];
public:
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (1000 - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << x << " pushed into stack";
        return true;
    }
}
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    return 0;
}