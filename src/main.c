/**
 * @file main.c
 * @author Benoit ARQUILLIERE
 * @brief 
 * @version 0.1
 * @date 2021-10-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include "DividAndConquer/dichotomie.h"


int main()
{
	int size = 20;
	int value = 5;
	int array[size];
	create_Table(array, size);

	find_by_dichotomy(array, size, value);

	return EXIT_SUCCESS;
}