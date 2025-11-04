#include <stdio.h>
#include <stdbool.h>

int main() {
	// declare and intialize variables
	int i = 42;
	float f = 3.14f;
	double d = 2.718281828;
	char c = 'X';

	printf("int: %d\n", i);
	printf("float: %f\n", f);
	printf("double: %lf\n", d);
	printf("char: %c\n\n", c);

	// characters and ASCII values
	char a = 'a', b = 'b', z = 'z';
	printf("Chars: %c %c %c\n", a, b, z);

	char A = 65, B = 66, Z = 90;
	printf("ASCII chars: %c %c %c\n\n", A, B, Z);

	// scientific numbers (notation)
	float sf = 5.2e3f;
	double sd = 3.1e-4;
	printf("Scientific float: %f\n", sf);
	printf("Scientific double: %lf\n\n", sd);

	// print decimal precisions
	float pi = 3.14159f;
	printf("pi with 1 decimal: %.1f\n", pi);
	printf("pi with 2 decimals: %.2f\n", pi);
	printf("pi with 4 decimals: %.4f\n", pi);
	printf("pi with 6 decimals: %.6f\n\n", pi);
	
	// print sizes
	printf("Size of int: %zu\n", sizeof(int));
	printf("Size of float: %zu\n", sizeof(float));
	printf("Size of double: %zu\n", sizeof(double));
	printf("Size of char: %zu\n\n", sizeof(char));

	// division and casting
	int x = 7, y = 2;
	float div = (float)x / y;
	printf("Division result: %.3f\n", div);
	printf("Percentage: %.2f%%\n\n", div * 100);
	
	// extended types
	int normalInt = 1000; // standard int
	double normalDouble = 3.14; // standard double
	short int small = -100; // smaller int
	unsigned int count = 25; // only positive int
	long int big = 1234567890; // larger int
	long long int veryBig = 9223372036854775807; // very large int
	unsigned long long int huge = 18446744073709551615U; // very large, only positive
	long double precise = 3.141592653589793238L; // extended precision
	
	printf("normal int: %d\n", normalInt);
	printf("normal double: %lf\n", normalDouble);
	printf("short int: %hd\n", small);
	printf("unsigned int: %u\n", count);
	printf("long int: %ld\n", big);
	printf("long long int: %lld\n", veryBig);
	printf("unsigned long long int: %llu\n", huge);
	printf("long double: %.18Lf\n", precise);

	return 0;
}
