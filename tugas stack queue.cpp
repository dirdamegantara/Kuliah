#include <iostream>
using namespace std;

class Stack {
	
private:
	int data[5];
	int top;

public:
	Stack()
	{
		top = -1;
	}

	bool isEmpty()
	{	
		if (top == -1)
		{
			return true;
		}
		return false;
	}

	bool isFull()
	{
		if (top == 4)
		{
			return true;
		}
		return false;
	}

	void push(int x)
	{
		if (!isFull())
		{
			top++;
			data[top] = x;
		}
		else 
		{
			cout << "Stack is full\n";
		}
	}	

	void pop()
	{
		if(!isEmpty())
		{
			cout << data[top] << "\n";
			top--;
		}
		else 
		{
			cout << "Stack is empty\n";
		}
	}

	void clear()
	{
		top = -1;
		cout << "Stack dikosongkan\n";
	}
};

class Queue {
private:
    int data[5];
    int front, rear;

public:
    Queue() 
	{
		front = -1;
		rear = -1;
    }

    bool isEmpty() 
	{
        if(front == -1) 
		{
            return true;
        }
        return false;
    }

    bool isFull() 
	{
        if(rear == 4) 
		{
            return true;
        }
        return false;
    }

    void enqueue(int x) 
	{
        if(!isFull()) 
		{
			if(front == -1)
			{
				front = 0;
			}
            rear++;
            data[rear] = x;    
        } 
		else 
		{
            cout << "Queue is full\n";
        }
    }

    void dequeue() 
	{
        if(!isEmpty()) 
		{
            cout << data[front] << "\n";
			if(front == rear)
			{
				front = -1;
				rear = -1;
			}
			else
			{
				front++;
			}
        } 
		else 
		{
            cout << "Queue is empty\n";
        }
    }

    void clear() 
	{
        front = -1;
		rear = -1;
        cout << "Queue Dikosongkan\n";
    }
};

int main()
{
	Stack s;
	Queue q;
	int pilihan;
	cout << "\n";
	cout << "Tugas Praktikum 6 : Stack dan Queue\n";
	cout << "1. Stack\n";
	cout << "2. Queue\n";
	cout << "Pilihan: ";
	cin >> pilihan;
	while(pilihan != 3)
	{
		switch(pilihan)
		{
			case 1:
			{
				s.clear();
				s.push(2);s.push(4);s.push(6);s.push(8);s.push(10);s.push(16);
				s.pop();s.pop();s.pop();s.pop();s.pop();s.pop();s.pop();s.pop();
			}
			break;	
			case 2:
			{
				q.clear();
				q.enqueue(0);q.enqueue(1);q.enqueue(2);q.enqueue(3);q.enqueue(4);q.enqueue(5);
				q.dequeue();q.dequeue();q.dequeue();q.dequeue();q.dequeue();q.dequeue();
			}
			break;
			default:
				break;
		}
		
	}
}
	

