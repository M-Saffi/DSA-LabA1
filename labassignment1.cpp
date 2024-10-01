// Name: Muhammad Saffi
// Roll Number: FA23-BCS-208
// Section: C

// Objective: Sort a stack using another stack.
// Task: Implement a function that takes an unsorted stack and returns a sorted stack (with the smallest on top).
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

struct stack
{
    int top;
    int a[5];

    stack()
    {
        top = -1;
    }

    void push(int n)
    {
        top++;
        a[top] = n;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        return a[top--];
    }
};

void stackSort(struct stack &c, struct stack &b)
{
    int temp = 0;
    int stemp = 0;
    while (c.top != -1)
    {
        temp = c.pop();
        while (b.top != -1 && b.a[b.top] < temp)
        {
            stemp = b.pop();
            c.push(stemp);
        }
        b.push(temp);
        cout << "hello PINKU" << b.top << endl;
    }
    while (c.top != -1)
    {
        c.pop();
    }
    cout << "hehhe" << c.top << endl;
}

int main()
{
    int ltemp;
    struct stack s;
    struct stack m;

    int b[5] = {10, 8, 11, 2, 7};
    for (int i = 0; i < 5; i++)
    {
        s.push(b[i]);
        cout << s.top << endl;
    }

    stackSort(s, m);

    for (int i = 0; i < 5; i++)
    {
        ltemp = m.pop();
        cout << ltemp << endl;
    }
}
