/* Дано целое положительное число. 
 * Проверить истинность высказывания: 
 * «Данное число является нечетным трехзначным».
 */

#include <iostream>
int main()
 {
 	int a;

 	std::cout << "enter a\n";
 	std::cin >> a;

 	bool b = (a / 1000 == 0 && !(a / 100 == 0) && 
 		a % 2 == 1 && !(a / 10 == 0));

 	std::cout << "\n" << b << "\n";

 	return 0;
 }