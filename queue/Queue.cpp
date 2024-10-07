#include <iostream>
#include "Queue.h"
using namespace std;

int Queue::pop()
{
	int new_size = size - 1;
	int result = data[0];
	int* new_data = new int[new_size];
	for (int i = 0; i < new_size; i++)
	{
		new_data[i] = data[i + 1];
	}
	delete[] data;
	data = new_data;
	size -= 1;
	return result;
}

int Queue::top()
{
	return data[0];
}

void Queue::push(int value)
{
	int new_size = size + 1;
	int* new_data = new int[new_size];
	if (data != nullptr)
	{
		for (int i = 0; i < size; i++)
		{
			new_data[i] = data[i];
		}
	}
	new_data[size] = value;
	delete[] data;
	data = new_data;
	size++;
}

int Queue::IsEmpty()
{
	return size == 0;
}

void Queue::print()
{
	if (size == 0)
	{
		return;
	}
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << ' ';
	}
	cout << endl;
}

Queue::~Queue()
{
	delete[] data;
}
