/**
 * @file knapsack.c
 * @author Benoit ARQUILLIERE
 * @brief 
 * @version 0.1
 * @date 2021-10-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "knapsack.h"
#include <stdio.h>

/**
 * @brief Permet de trier un tableau d'items en fonction de leur moyenne
 * poids / valeur.
 * 
 * @param data 
 * @param size 
 */
void sort_Items(Item data[], int size)
{

    int indexMin;
    Item temp;

    for (int i = 0; i < size - 1; i++)
    {
        indexMin = i;
        for (int j = i; j < size; j++)
        {
            if (data[j].moyenne < data[indexMin].moyenne)
            {
                indexMin = j;
            }
        }
        temp = data[i];
        data[i] = data[indexMin];
        data[indexMin] = temp;
    }
}

/**
 * @brief Met les items triés dans le sac en fonction de leur moyenne, sans 
 * dépasser la capacité maximal du sac.
 * 
 * @param data tableau d'items
 * @param size taille d'items
 * @param capacity taille du sac
 */
void put_In_Bag(Item bag[], Item data[], int size, int capacity)
{

    int compteur = 0;

    sort_Items(data, size);

    for (int i = size - 1; i >= 0; i--)
    {
        if (capacity >= data[i].poids)
        {
            bag[compteur] = data[i];
            capacity -= data[i].poids;
            compteur += 1;
        }
    }
}