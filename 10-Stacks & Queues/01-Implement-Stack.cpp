#include <bits/stdc++.h>
#define max 20
using namespace std;

class Stack
{
    int top = -1;

public:
    int a[max];
    void push(int data);
    int pop();
    int peek();
    bool isEmpty();
};

void Stack ::push(int data)
{
    if (top > max)
    {
        cout << "Stack Overflow!!\n";
    }
    else
    {
        a[++top] = data;
        cout << data << " is inserted into the stack\n";
    }
}

int Stack ::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow!!";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

int Stack ::peek()
{
    if (top < 0)
    {
        cout << "Stack is empty\n";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

bool Stack ::isEmpty()
{
    return (top < 0);
}

int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "\nThe top element of the stack is: " << s.peek() << endl;

    cout << "The contents of the stack are: ";
    while (!s.isEmpty())
    {
        // Print the top element of the stack
        cout << s.peek() << " ";
        // Remove the top element of the stack
        s.pop();
    }

    return 0;
}