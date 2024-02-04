#include <iostream>
#include <string>
using namespace std;

void random_init(int* vector, int length, int a, int b) {
	srand(time(NULL));

	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}

	for (int i = 0; i < length; i++)
	{
		vector[i] = rand() % (b - a + 1) + a;
	}
}

string convert_to_string(int* vector, int length) {
	string msg = "";

	for (int i = 0; i < length; i++)
	{
		msg += to_string(vector[i]) + " ";
	}

	return msg;
}
