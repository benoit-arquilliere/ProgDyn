/**
 * @file knapsack.h
 * @author Benoit ARQUILLIERE
 * @brief 
 * @version 0.1
 * @date 2021-10-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef KNAPSACK_H
#define KNAPSACK_H

typedef struct
{
    int poids;
    int valeur;
    float moyenne;
} Item;

#endif /*KNAPSACK_H*/

void sort_Items(Item data[], int size);
void put_In_Bag(Item bag[], Item data[], int size, int capacity);
