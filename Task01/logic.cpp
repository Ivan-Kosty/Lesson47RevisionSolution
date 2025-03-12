// Сумма элементов [The sum of elements]
//
// Необходимо разработать функцию, которая вычисляет 
// сумму элементов массива, расположенных между первыми
// максимальным по модулю и минимальным по модулю элементами.
#include "logic.h"
using namespace std;
int sum_between_first_min_max(int* array, int size) {
	if (size == 0)
	{
		return 0; //Proverka na pustoi massive
	}

	int max_abs_index = 0;
	int min_abs_index = 0;
	int max_abs_value = abs(array[0]);
	int min_abs_value = abs(array[0]);


	for (int i = 1; i < size; ++i) {
		int current_abs_value = abs(array[i]);
		if (current_abs_value > max_abs_value) {
			max_abs_value = current_abs_value;
			max_abs_index = i;
		}
		if (current_abs_value < min_abs_value) {
			min_abs_value = current_abs_value;
			min_abs_index = i;
		}
	}
	int start = (max_abs_index < min_abs_index) ? max_abs_index : min_abs_index;
	int end = (max_abs_index > min_abs_index) ? max_abs_index : min_abs_index;
	
	
	int sum = 0;

	for (int i = start + 1; i < end; ++i) {
		sum += array[i];
	}

	return sum;
}