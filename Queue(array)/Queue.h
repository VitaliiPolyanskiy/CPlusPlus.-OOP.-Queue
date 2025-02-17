#pragma once;

class Queue
{
	// Нижняя и верхняя границы стека
	enum {EMPTY = 0, FULL = 19};
	// Массив для хранения данных
	int qu[FULL+1];
	// текущий размер очереди
	int currentsize;

public:
	// Конструктор
	Queue();
	// Добавление элемента
	void Add(int n); 
	// Удаление элемента
	int Remove();        
	// Очистка очереди
	void Clear();      
	// Проверка существования элементов в очереди
	bool IsEmpty();    
	// Проверка на переполнение очереди
	bool IsFull();     
	// Количество элементов в очереди
	int GetCount();    
};
