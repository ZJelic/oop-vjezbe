#include <iostream>
#include<cmath>

typedef struct {
	double x;
	double y;
	double r;
}circle;

bool twoCirclesCollision(const circle& c1, const circle& c2)
{
	//(x2-x1)^2 + (y1-y2)^2 <= (r1+r2)^2 circle collision
	//if the edges of the circles touch, the distance between the centers is r1+r2
	//any less and then do collide

	double a = pow(c1.r - c2.r, 2);
	double b = pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2);
	double c = pow(c1.r + c2.r, 2);

	if (a <= b && b <= c)
		return true;
	return false;
}

int circleCollision(circle arr[], int counter, int num)
{
	circle unitCircle;
	unitCircle = {0, 0, 1};

	for (int i = 0; i < num; i++)
	{
		double a = pow(arr[i].r - unitCircle.r, 2);
		double b = pow(arr[i].x - unitCircle.x, 2) + pow(arr[i].y - unitCircle.y, 2);
		double c = pow(arr[i].r + unitCircle.r, 2);

		if (a <= b && b <= c)
			counter++;
	}
	return counter;
}

int main()
{
	circle c1, c2;


	//example for two circles
	c1 = { 2,3,5 };
	c2 = { 1,3,4 };
	std::cout << std::boolalpha << "Example, circle collision (true or false): " << twoCirclesCollision(c1, c2) << std::endl;
	

	int num = 3;
	circle *arr = new circle[num];

	for (int i = 0; i < num; i++)
	{
		std::cout << "Enter x, y and radius:" << std::endl;
		std::cin >> arr[i].x >> arr[i].y >> arr[i].r;
	}

	int counter = 0;
	std::cout << "Collision between circles:" << circleCollision(arr, counter, num);

	delete[] arr;
}