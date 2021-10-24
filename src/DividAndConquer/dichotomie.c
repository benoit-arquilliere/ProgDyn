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
 * @brief Créer un tableau d'entiers aléatoires et 
 * le trie par ordre croissant.
 * 
 * @param array Tableau d'entiers
 * @param size Taille du tableau
 */
void create_Table(int array[], int size)
{
    int temp;
    int indexMin;

    //Generation du tableau
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % size;
    }

    //Tri du tableau
    for (int i = 0; i < size; i++)
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
 * @brief Recherche l'index d'une valeur passé en paramètre
 * par dichotomie.
 * 
 * @param array Tableau de valeurs
 * @param size_t Taille du tableau
 * @param value La valeur recherché
 * @return int Renvoie l'index de la valeur (-1 si elle n'existe pas)
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