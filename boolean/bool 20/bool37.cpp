/* Даны координаты двух различных полей шахматной доски x1, y1, x2, y2 
 * (целые числа, лежащие в диапазоне 1–8). 
 * Проверить истинность высказывания: 
 * «Король за один ход может перейти с одного поля на другое». 
 */

#include <iostream>

int main()
{
	int x1, y1;
	int x2, y2;

	std::cout << "введите координаты первого поля\n";
	std::cin >> x1 >> y1;

	std::cout << "введите координаты второго поля\n";
	std::cin >> x2 >> y2;

	/* Поле, где находится король можно условно разделить на три строки:
	 * в первой, верхней строке y-индексы либо равны y-индексу основного
	 * поля, или отличаются от него на единицу, x-индексы больше на единицу,
	 * во второй, средней строке x-индексы такие же, как у основного поля,
	 * y-индексы отличаются на единицу от основного поля, в третьей, нижней
	 * строке поля x-индексы меньше на единицу, чем у основного поля, а
	 * y-индексы отличаются на единицу.
	 */

	bool d = ((x2 == x1 && (y2 == y1 - 1 || y2 == y1 + 1)) || // клетка расположена в средней строке допустимого поля
		(x2 == x1 + 1 && (y2 == y1 - 1 || y2 == y1 + 1 || y2 == y1)) || // клетка расположена в верхней строке допустимого поля
		(x2 == x1 - 1 && (y2 == y1 - 1 || y2 == y1 + 1 || y2 == y1))); // клетка расположена в нижней строке допустимого поля
	
	std::cout << d << "\n";

	return 0;
}	