#include "queue.h"

Queue::Queue()
{
	// Изначально очередь пустая
	currentsize = EMPTY;
}

void Queue::Clear()
{
	// Эффективная "очистка" очереди 
	currentsize = EMPTY;
}

bool Queue::IsEmpty()
{
	// очередь пустая?
	return currentsize == EMPTY;
}

bool Queue::IsFull()
{
	// очередь полная?
	return currentsize == FULL;
}

int Queue::GetCount()
{
	// Количество элементов в очереди
	return currentsize;
}

void Queue::Add(int n)
{
	// добавление элемента в очередь
	if(!IsFull())
		qu[currentsize++] = n;
}

int Queue::Remove()
{
	if(!IsEmpty())
	{
		// удаление элемента из очереди
		int n = qu[0];
		for(int i = 0; i < currentsize - 1; i++)
			qu[i] = qu[i+1];
		currentsize--;
		return n;
	}
	else 
		return 0;
}