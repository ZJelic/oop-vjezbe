#ifndef SORT_STACK_H
#define SORT_STACK_H
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

//Sortiranje 
template <class T>
void sort(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				T tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

template <>
void sort(char* arr, int size) {
	for (int i = 1; i < size; ++i) {
		for (int j = size - 1; j >= i; --j) {
			if (tolower(arr[j - 1]) > tolower(arr[j])) {
				swap(arr[j - 1], arr[j]);
			}
		}
	}
}

//Stack
template <class S>
class stack
{
	S *arr;
	int top;
	int stackSize;

public:
	stack(int size = 10);
	~stack() {
		delete[] arr;
	}
	void push(S);
	S pop();
	bool isEmpty();
	S peek();
	bool isFull();
};

template <class S>
stack<S>::stack(int size)
{
	arr = new S[size];
	stackSize = size;
	top = -1;
}

template <class S>
void stack<S>::push(S x)
{
	if (isFull())
	{
		cout << "Overflow";
		exit(EXIT_FAILURE);
	}
	cout << "Push: " << x << endl;
	arr[++top] = x;
}

template <class S>
S stack<S>::pop()
{
	if (isEmpty())
	{
		cout << "Stack is empty!";
		exit(EXIT_FAILURE);
	}
	cout << "Pop: " << peek() << endl;

	return arr[top--];
}

template <class S>
S stack<S>::peek()
{
	if (!isEmpty())
		return arr[top];
	else
		exit(EXIT_FAILURE);
}
template <class S>
bool stack<S>::isFull()
{
	return top == stackSize - 1;
}

template <class X>
bool stack<X>::isEmpty()
{
	return top == -1;
}
#endif