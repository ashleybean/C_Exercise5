#include <stdio.h>
#include <stdbool.h>

int main() {
	int x = 0;

	// difference between x++ and ++x
	printf("x = %d\n", x);
	printf("x++ = %d\n", x++);
	printf("After x++: %d\n\n", x);

	x = 0;
	printf("x = %d\n", x);
	printf("++x = %d\n", ++x);
	printf("After ++x: %d\n\n", x);

	x = 2;
	printf("x = %d\n", x);
	printf("x-- = %d\n", x--);
	printf("After x--: %d\n\n", x);

	x = 2;
	printf("x = %d\n", x);
	printf("--x = %d\n", --x);
	printf("After --x: %d\n\n", x);

	// compound assignments
	int a = 9, b = 5;
	a -= b; printf("a -= b -> %d\n", a);
	a += b; printf("a += b -> %d\n", a);
	a *= b; printf("a *= b -> %d\n", a);
	a /= b; printf("a /= b -> %d\n", a);
	a %= b; printf("a %%= b -> %d\n", a);
	a &= b; printf("a &= b -> %d\n", a);
	a |= b; printf("a |= b -> %d\n", a);
	a ^= b; printf("a ^= b -> %d\n", a);
	a >>= 1; printf("a >>= 1 -> %d\n", a);
	a <<= 2; printf("a <<= 2 -> %d\n\n", a);

	// boolean variables and int equivalents
	bool isLoggedIn = true;
	bool isAdmin = false;
	printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
	printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
	printf("Not logged in: %s\n", (!isLoggedIn) ? "true" : "false");

	printf("USING INT EQUIVALENTS\n");

	int isLoggedInInt = 1;
	int isAdminInt = 0;
	printf("Regular user: %s\n", (isLoggedInInt && !isAdminInt) ? "true" : "false");
	printf("Has access: %s\n", (isLoggedInInt || isAdminInt) ? "true" : "false");
	printf("Not logged in: %s\n\n", (!isLoggedInInt) ? "true" : "false");

	// logical operators
	int c;
	a = 1; b = 0; c = 1;
	printf("a && b || c = %d\n", a && b || c);
	printf("(a && b) || c = %d\n", (a && b) || c);
	printf("a || b && c = %d\n",  a || b && c);
	printf("(a || b) && c = %d\n", (a || b) && c);
	printf("!a && b = %d\n", !a && b);

	return 0;
}
