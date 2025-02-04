#include "queue.h"

Queue::Queue()
{
	// ���������� ������� ������
	currentsize = EMPTY;
}

void Queue::Clear()
{
	// ����������� "�������" ������� 
	currentsize = EMPTY;
}

bool Queue::IsEmpty()
{
	// ������� ������?
	return currentsize == EMPTY;
}

bool Queue::IsFull()
{
	// ������� ������?
	return currentsize == FULL;
}

int Queue::GetCount()
{
	// ���������� ��������� � �������
	return currentsize;
}

void Queue::Add(int n)
{
	// ���������� �������� � �������
	if(!IsFull())
		qu[currentsize++] = n;
}

int Queue::Remove()
{
	if(!IsEmpty())
	{
		// �������� �������� �� �������
		int n = qu[0];
		for(int i = 0; i < currentsize - 1; i++)
			qu[i] = qu[i+1];
		currentsize--;
		return n;
	}
	else 
		return 0;
}