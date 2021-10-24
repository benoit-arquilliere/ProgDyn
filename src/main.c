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

#include "Tests/tests.h"

/**
 * @mainpage ProgDyn Documentation  
 *
 * @brief
 *
 * ###Le projet ProgDyn comprend 3 parties:  
 * 
 * - **Divid And Conquer**  
 * Il s'agit de fonctions où l'on souhaite rechercher par dichotomie une valeur dans  
 * un tableau de valeur aléatoire et trié.  
 * 
 * - **Knapsack**  
 * Permet de placer dans un sac (tableau) des items dont le poids et la valeur sont  
 * variables. Il sont placés de façon à que le ratio valeur/poids soit le plus élevé  
 * possible, et ce, sans dépasser la capacité maximal du sac.  
 *
 * - **Plus grand carré blanc**  
 * Permet d'identifier le plus grand carré blanc possible d'être dessiné dans une  
 * matrice et qu'aucun symbole ne soit touché.  
 * 
 */

/**
 * @brief 
 * 
 * @return int 
 */
int main()
{

	CU_initialize_registry();
    
	CU_pSuite *tests = CU_add_suite("Tests", test_init, test_cleanup);
	
	CU_add_test(tests, "Dichotomie", test_dichotomie);
	CU_add_test(tests, "Knapsack", test_knapsack);
	CU_add_test(tests, "Pgcb", test_pgcb);
	
	CU_basic_run_tests();
    test_cleanup();

	return EXIT_SUCCESS;
}