#include <iostream>

using namespace std;

int Queue[10];
int Top = -1;

bool QIsEmpty()
{
	if(Top == -1)
	{
		return true;
	}
	return false;
}

bool QIsFull()
{
	if(Top == 9)
	{
		return true;
	}
	return false;
}

void Enqueue(int x)
{
	if(!QIsFull())
	{
		Top++;
		Queue[Top] = x;	
	}
	else 
	{
		cout << "Queue is full\n";
	}
}

void Dequeue()
{
	if(!QIsEmpty())
	{
		cout << Queue[0] << "\n";
		for (int i = 0; i < Top; i++)
		{
			Queue[i] = Queue[i + 1];
		}
		Top--;
	}
	else
	{
		cout << "Queue is empty\n";
	}
}

void QClear()
{
	Top = -1;
	cout << "Queue Dikosongkan\n";
}

int main()
{
	QClear();
	Enqueue(0);Enqueue(1);Enqueue(2);Enqueue(3);Enqueue(4);
	Enqueue(5);Enqueue(6);Enqueue(7);Enqueue(8);Enqueue(9);Enqueue(10);
	Dequeue(); Dequeue(); Dequeue(); Dequeue(); Dequeue(); 
	Dequeue(); Dequeue(); Dequeue(); Dequeue(); Dequeue(); Dequeue(); 
	system("Pause");
}



