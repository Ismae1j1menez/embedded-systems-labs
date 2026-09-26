/******************************************************
 * @file main.c
 * @brief Interactive CLI Hello <Something>
 * @author Ismael Jimenez
 * @date September 07 2026
 * ***************************************************/

#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Hello");

	for (int i = 1; i < argc; i ++) {
		printf(" %s", argv[i]);		
	}

	printf("\n");

	return 0;
}
