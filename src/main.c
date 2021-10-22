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
	
	CU_basic_run_tests();
    test_cleanup();


	create_Matrix(15);

	return EXIT_SUCCESS;
}