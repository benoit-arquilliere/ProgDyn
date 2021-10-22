/**
 * @file pgcb.c
 * @author Benoit ARQUILLIERE
 * @brief Rechercher dans une matrice le plus grand carré blanc (espace vide).
 * @version 0.1
 * @date 2021-10-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "pgcb.h"
#include <stdio.h>

/**
 * @brief Permet de créer une matrice de taille n x n 
 * contenant des 0. Puis remplit N cellules tirées au
 * hasard avec la valeur 1.
 * 
 * @param size Taille de la matrice souhaitée
 */
void create_Matrix(int size)
{
    int matrix[size][size];
    int i, j, k;

    srand(time(NULL));
    
    //génére une matrice de 0 de taille choisis
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {

            matrix[j][i] = rand() % 2;
        }
    }

    display_Matrix(matrix, size);
}

/**
 * @brief Permet d'afficher la matrice avec 1 → * et 0 → espace.
 * 
 * 
 * @param matrix La matrice crée précedement
 * @param size Taille de la matrice
 */
void display_Matrix(int *matrix, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i * size + j] == 0)
            {
                printf("   ");
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
}


void find_Pgcb(int *matrix, int size)
{
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (matrix[i * size + j] == 0)
    //         {
    //             printf("   ");
    //         }
    //     }
    // }

    // int x;
    // int y;

    // if(x-1 == 0 && x-1-size == 0 && y-1 == 0){
    //     int matrice[x][y]
    // }

}