// C program to reverse the string in C using for loop
#include <stdio.h>
#include <string.h>

int main()
{
	// string to be reversed.
	char str[100] = "sayali";

	printf("Original String: %s\n", str);

	// string length
	int length = strlen(str);

	// for loop
	for (int i = 0, j = length - 1; i <= j; i++, j--) {
		// swapping characters
		char c = str[i];
		str[i] = str[j];
		str[j] = c;
	}

	printf("Reversed String: %s", str);

	return 0;
}
