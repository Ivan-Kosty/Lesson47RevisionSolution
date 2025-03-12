// Среднее арифметическое ненулевых элементов
// [The arithmetic mean of non - zero elements].
//
// Дан вектор целых чисел. Необходимо разработать функцию, 
// которая вычисляет среднее арифметическое ненулевых элементов вектора.
#include "logic.h"
using namespace std;
double calculate_arithmetical_mean_of_nonzero_elements(int* array, int size){
    int sum = 0;
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (array[i] != 0) {
            sum += array[i];
            ++count;
        }
    }

    if (count == 0) {
        return 0;
    }

    return (sum * 1.0) / count;
}
