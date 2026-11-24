/*Implement a class template Stack using an array. Include functions
push(), pop(), and display(). Handle stack overflow and underflow 
conditions.*/
#include <iostream>
using namespace std;
template <class T>
class Stack
{
    T arr[5];
    int top;
public:
    Stack()
    {
        top = -1;
    }
    void push(T value)
    {
        if (top == 4)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            cout << "Popped element: " << arr[top] << endl;
            top--;
        }
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
        }
        else
        {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};
int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
}
