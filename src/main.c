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
#include <assert.h>
#include <time.h>
#include "DividAndConquer/dichotomie.h"
#include "Knapsack/knapsack.h"

/**
 * @brief 
 * 
 */
int test_dichotomie(){
	int size = 20;
	int value = 2;
	int array[size];
	create_Table(array, size);
	int ret = find_by_dichotomy(array, size, value);
	return ret;
}

/**
 * @brief 
 * 
 */
void test_knapsack(){

	int maxCapacity = 10;
	srand(5);
	int nbItems = rand() % 10 + 3;

	Item array[nbItems];

	for (int i = 0; i < nbItems; i++){
		array[i].poids = rand() % 10 + 1;
		array[i].valeur = rand() % 10 + 1;
		array[i].moyenne = (float)array[i].valeur / (float)array[i].poids;
	}

	put_In_Bag(array, nbItems, maxCapacity);
}

/**
 * @brief 
 * 
 * @return int 
 */
int main()
{

	test_dichotomie();
	assert(test_dichotomie() == 2);
	test_knapsack();
	// assert(put_In_Bag());


	return EXIT_SUCCESS;
}