/**
 * @file dichotomie.c
 * @author Benoit ARQUILLIERE
 * @brief Recherche d'une valeur dans un tableau par dichotomie
 * @version 0.1
 * @date 2021-10-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "dichotomie.h"
#include <stdio.h>

/**
 * @brief Create a Table object
 * 
 * @param array 
 * @param size 
 */
void create_Table(int array[], int size)
{
    int temp;
    int indexMin;

    //Generation du tableau
    for (int i = 0; i < size - 1; i++)
    {
        array[i] = rand() % size;
    }

    //Tri du tableau
    for (int i = 0; i < size - 1; i++)
    {
        indexMin = i;
        for (int j = i; j < size; j++)
        {
            if (array[j] < array[indexMin])
            {
                indexMin = j;
            }
        }
        temp = array[i];
        array[i] = array[indexMin];
        array[indexMin] = temp;
    }
}

/**
 * @brief 
 * 
 * @param array 
 * @param size_t 
 * @param value 
 * @return int 
 */
int find_by_dichotomy(int array[], int size_t, int value)
{

    int min = 0;
    int max = size_t;
    int middle = (max + min) / 2;

    while ((min != max - 1) && (array[middle] != value))
    {
        if (array[middle] < value)
        {
            min = middle;
            middle = (max + min) / 2;
        }
        else
        {
            max = middle;
            middle = (max + min) / 2;
        }
    }

    if (min == max - 1)
    {
        return -1;
    }
    return middle;
}