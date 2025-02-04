#include <iostream>
#include <iomanip>
#include "Queue.h"

using namespace std;


int main()
{
	Queue q;
	int n;
	for(int i = 0; i < 10; i++)
	{
		cout << "Add " << i+1 << " element to the queue: ";
		cin >> n;
		q.Add(n);
	}
	int size = q.GetCount();
	for(int i = 0; i < size; i++)
	{
		cout << "Remove element from the query " << setw(5) << q.Remove() << "\n";
	}

	return 0;
}