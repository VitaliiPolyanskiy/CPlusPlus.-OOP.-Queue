#pragma once;

class Queue
{
	// ������ � ������� ������� �����
	enum {EMPTY = 0, FULL = 19};
	// ������ ��� �������� ������
	int qu[FULL+1];
	// ������� ������ �������
	int currentsize;

public:
	// �����������
	Queue();
	// ���������� ��������
	void Add(int n); 
	// �������� ��������
	int Remove();        
	// ������� �������
	void Clear();      
	// �������� ������������� ��������� � �������
	bool IsEmpty();    
	// �������� �� ������������ �������
	bool IsFull();     
	// ���������� ��������� � �������
	int GetCount();    
};
