#include <iostream>
using namespace std;

void random_init(int* vector, int length, int a, int b);
string convert_to_string(int* vector, int length);

void selection_sort_asc(int* vector, int length);
void insertion_sort_asc(int* vector, int length);

int main() {
	const int size = 10;
	int vector[size];// = { 7, 8, 1 };

	random_init(vector, size, 0, 9);

	cout << "Before:\n" << convert_to_string(vector, size) << endl;

	insertion_sort_asc(vector, size);

	cout << "After:\n" << convert_to_string(vector, size);

	return 0;
}