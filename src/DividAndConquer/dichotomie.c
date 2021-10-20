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
 * @param size 
 * @return int 
 */
int create_Table(int size){
    int array[size];
    int temp;
    int indexMin;
    
    //Generation du tableau
    for(int i=0; i<size-1; i++){
        array[i] = rand() % size;
    }

    //Tri du tableau
    for(int i=0; i<size-1; i++)
    {
        indexMin = i;
        for(int j=i; j<size; j++)
        {
            if(array[j]<array[indexMin])
            {
                indexMin = j;
            }
        }
        temp = array[i]; 
        array[i] = array[indexMin];
        array[indexMin] = temp;
    }

    //Affichage du tableau
    for (int j = 0; j < 19; j++){
        printf("%d / ", array[j]);
    }
    printf("%s Tableau", array);
    return array;
}


/**
 * @brief 
 * 
 * @param array 
 * @param size_t 
 * @param value 
 * @return int 
 */
int find_by_dichotomy(int array[], int size_t, int value) {

    int min = 0;
    int max = size_t;
    int middle = (max + min) / 2;


    printf("%d %d %d Tableau ", min, max, middle);
    while(min != max || middle != value){
        if(value > array[middle]){
            min = middle;
            middle = (max + min) / 2;
            printf("%d ", middle);
        }
        else{
            max = middle;
            middle = (max + min) / 2;
            printf("%d ", middle);
        }
    }

    printf("%d", middle);
    return middle;
}