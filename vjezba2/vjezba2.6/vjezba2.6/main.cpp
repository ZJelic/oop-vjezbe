#include <iostream>

struct vector
{
	int *elements;
	int phySize;
	int logSize;

	void vector_new(int size) {
		if (size <= 0)
			std::cout << "Min size >= 1!" << std::endl;
		else
		{
			logSize = 0;
			phySize = size;
			elements = new int[size];
		}
	}

	void vector_delete()
	{
		delete[] elements;

		elements = NULL;
		logSize = 0;
		phySize = 0;
	}

	void vector_push_back(int n)
	{
		elements[logSize] = n;
		logSize++;

		if (logSize == phySize)
		{
			int *temp = new int[2 * phySize];
			std::copy(elements, elements + phySize, temp);

			delete[] elements;
			
			//allocate *2
			elements = temp;
			phySize = phySize * 2;
		}


	}
	void vector_pop_back()
	{
		elements[logSize] = 0;
		logSize--;
	}

	int& vector_front()
	{
		return elements[0];
	}

	int& vector_back()
	{
		return elements[logSize - 1];
	}

	int vector_size()
	{
		return logSize;
	}

};

int main()
{
	vector v;

	v.vector_new(5);

	v.vector_push_back(2);
	v.vector_push_back(5);
	v.vector_push_back(6);
	v.vector_push_back(1);
	v.vector_push_back(3);
	v.vector_push_back(4);
	v.vector_push_back(9);
	v.vector_push_back(2);

	v.vector_pop_back(); //pop back 2

	for (int i = 0; i < v.logSize; i++)
	{
		std::cout << v.elements[i] << std::endl;
	}

	std::cout << "First element:" << v.vector_front() << std::endl;
	std::cout << "Last element:" << v.vector_back() << std::endl;
	std::cout << "Array size:" << v.vector_size() << std::endl;

	v.vector_delete();
}
