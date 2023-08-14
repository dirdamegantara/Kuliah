#include <iostream>
#include <malloc.h>

using namespace std;

struct Node
{
	int Nilai;
	Node *Next;
};

void Clear(struct Node *node)
{
	node->Next = NULL;
};

bool IsEmpty(struct Node *node)
{
	if (node->Next == NULL)
	{
		return true;
	}
	return false;
};

void Insert(struct Node *node, int x, int *Tail)
{
	while (node->Next != NULL)
	{
		node = node->Next;
	}
	node->Next = (struct Node *)malloc(sizeof(struct Node));
	node->Next->Nilai = x;
	node->Next->Next = NULL;
	*Tail += 1;
};

void RemoveTail(struct Node *node, int *Tail)
{
	if (!IsEmpty(node))
	{
		for (int i = 0; i < *Tail - 1; i++)
		{
			node = node->Next;
		}
		node->Next = NULL;
		*Tail -= 1;
	}
}

void Display(struct Node *node)
{
	while (node->Next != NULL)
	{
		node = node->Next;
		cout << node->Nilai << "->";
	}
	cout << "NULL\n";
};

int main()
{
	struct Node *node;
	int Tail = 0;
	node = (struct Node *)malloc(sizeof(struct Node));
	Clear(node);
	Insert(node, 1, &Tail);
	Insert(node, 2, &Tail);
	Insert(node, 3, &Tail);
	Insert(node, 4, &Tail);
	Insert(node, 5, &Tail);
	Display(node);
	RemoveTail(node, &Tail);
	Display(node);
	system("PAUSE");
}




