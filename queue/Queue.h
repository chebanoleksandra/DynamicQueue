#pragma once
class Queue
{
	int* data = nullptr;
	int size = 0;
public:
	int pop();
	int top();
	void push(int value);
	/*int IsFull();*/
	int IsEmpty();
	void print();
	~Queue();
};

