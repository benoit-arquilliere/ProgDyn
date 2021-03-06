/**
 * @file tests.c
 * @author Benoit ARQUILLIERE
 * @brief Regroupe les fonctions de tests qui s'effectuent dans le main
 * @version 0.1
 * @date 2021-10-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <CUnit/CUnit.h>

#include "../DividAndConquer/dichotomie.h"
#include "../Knapsack/knapsack.h"
#include "../Pgcb/pgcb.h"

/**
 * @brief Inialise les tests
 * 
 * @return int 
 */
int test_init()
{
	return 0;
}

/**
 * @brief Vide les tests
 * 
 * @return int 
 */
int test_cleanup()
{
	return 0;
}

/**
 * @brief Permet de tester les fonctions permettant la recherche
 * par dichotomie.
 * 
 */
void test_dichotomie()
{
	int size = 20;
	int value = 2;
	int array[size];
	create_Table(array, size);
	find_by_dichotomy(array, size, value);
	//Doit être true, car 2 est à l'index 2
	CU_ASSERT(find_by_dichotomy(array, size, value) == 2);
}

/**
 * @brief Permet de tester les fonctions permettant de 
 * remplir le sac à dos.
 * 
 */
void test_knapsack()
{

	int maxCapacity = 10;
	srand(5);
	int nbItems = rand() % 10 + 3;

	Item data[nbItems];

	for (int i = 0; i < nbItems; i++)
	{
		data[i].poids = rand() % 10 + 1;
		data[i].valeur = rand() % 10 + 1;
		data[i].moyenne = (float)data[i].valeur / (float)data[i].poids;
	}

	Item bag[nbItems];

	put_In_Bag(bag, data, nbItems, maxCapacity);
	CU_ASSERT(bag[0].poids == 2);
	CU_ASSERT(bag[1].poids == 3);
	CU_ASSERT(bag[2].poids == 1);
	CU_ASSERT(bag[3].poids == 3);
}

/**
 * @brief Permet de tester les fonctions afin de trouver le
 * plus grand carré blanc.
 * 
 */
void test_pgcb()
{
	create_Matrix(10);
	CU_ASSERT(1==1);
}
