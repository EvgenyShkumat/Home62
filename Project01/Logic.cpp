#include <iostream>

void selection_sort_asc(int* vector, int length) {
	for (int i = 0; i < length - 1; i++)
	{
		int current_min_index = i + 1;

		for (int j = i + 2; j < length; j++)
		{
			if (vector[current_min_index] > vector[j]) { 
				current_min_index = j;  
			}
		}

		if (vector[i] > vector[current_min_index]) {
			std::swap(vector[current_min_index], vector[i]);
		}
	}
}

void insertion_sort_asc(int* vector, int length) {
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j > 0 && vector[j - 1] > vector[j]; j--) {
			std::swap(vector[j - 1], vector[j]);
		}
	}
}
