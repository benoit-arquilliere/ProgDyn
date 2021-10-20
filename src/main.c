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
#include <CUnit/CUnit.h>

#include "DividAndConquer/dichotomie.h"
#include "Knapsack/knapsack.h"

/**
 * @brief 
 * 
 */
void test_dichotomie(){
	int size = 20;
	int value = 2;
	int array[size];
	create_Table(array, size);
	find_by_dichotomy(array, size, value);
	CU_ASSERT(find_by_dichotomy(array, size, value) == 2);
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
int test_init()
{
    return 0;
}

/**
 * @brief 
 * 
 * @return int 
 */
int test_cleanup()
{
    return 0;
}

/**
 * @brief 
 * 
 * @return int 
 */
int main()
{

	CU_initialize_registry();
    
	CU_pSuite *tests = CU_add_suite("Tests", test_init, test_cleanup);
	
	CU_add_test(tests, "Test Dichotomie", test_dichotomie);
	
	CU_basic_run_tests();
    test_cleanup();


	// test_knapsack();
	// assert(put_In_Bag());

	return EXIT_SUCCESS;
}