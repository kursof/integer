/* Даны целочисленные координаты трех вершин прямоугольника,
 * стороны которого параллельны координатным осям.
 * Найти координаты его четвертой вершины.
 */

 //недоделано

#include <iostream>

int main()
{
	int x1, y1, x2, y2, x3, y3;
	int x, y;

	std::cout << "введите координаты первой вершины\n";
	std::cin >> x1 >> y1;

	std::cout << "\nвведите координаты второй вершины\n";
	std::cin >> x2 >> y2;

	std::cout << "\nвведите координаты третьей вершины\n";
	std::cin >> x3 >> y3;

	if (x1 == x2)
	{
		x = x3;
	}
	else
	{
		(x1 == x3 ? x = x2:x = x1);
	}

	if (y1 == y2)
	{
		y = y3;
	}
	else
	{
		(y1 == y3 ? y = y2:y = y1);
	}

	std::cout << x << ", " << y << "\n";

	return 0;
} 