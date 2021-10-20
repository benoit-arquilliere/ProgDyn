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

void sort_Items(Item array[], int size)
{

    int indexMin;
    Item temp;

    for (int i = 0; i < size - 1; i++)
    {
        indexMin = i;
        for (int j = i; j < size; j++)
        {
            if (array[j].moyenne < array[indexMin].moyenne)
            {
                indexMin = j;
            }
        }
        temp = array[i];
        array[i] = array[indexMin];
        array[indexMin] = temp;
    }

    // for (int i = 0; i < size; i++)
    // {
    //     printf("w=%d c=%d moy=%.3f \n", array[i].poids, array[i].valeur, array[i].moyenne);
    // }
}

void put_In_Bag(Item array[], int size, int capacity)
{

    int compteur = 0;

    sort_Items(array, size);

    Item bag[size];

    for(int i = size - 1; i >= 0; i--){
        if (capacity >= array[i].poids){
            bag[compteur] = array[i];
            capacity -= array[i].poids;
            compteur += 1;
        }
    }
    
    // printf("\n\n");
    // for (int i = 0; i < compteur; i++)
    // {
    //     printf("w=%d c=%d moy=%.3f \n", bag[i].poids, bag[i].valeur, bag[i].moyenne);
    // }
}