#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"
#include "Vector_Sort.h"
#include "3D_Array_Sort.h"
#include "Filling.h"
#include "Output.h"
#include "Table.h"
void menu()//main menu
{
    while(1)
    {
        int mode;//menu mode
        printf("\nChoose:");
        printf("\n'1' for Vector");
        printf("\n'2' for 3D Array");
        printf("\n'3' for Table");
        printf("\n'4' for Exit");
        printf("\nInput: ");
        scanf("%d", &mode);
        switch(mode) 
        {
        case 1:
            menu_arr_sort(1);
            fflush(stdin);
            break;
        case 2:
            menu_arr_sort(2);
            fflush(stdin);
            break;
        case 3:
            table();
            fflush(stdin);
            break;
        case 4:
            exit(0);
        default:
            printf("\nError number mode.\n");
            break;
        }
    }
}
void menu_arr_sort(int mode)//menu for selecting sorting and filling the array
{
    int filling, sort; 
    system("cls");
    if(mode == 1)
    {
        printf("Vector");
        printf("\nP = %d", P);
    }
    else if(mode == 2)
    {
        printf("3D Array");
        Arr3D_declaration();
        printf("\nP = %d, M = %d, N = %d", P, M, N);
    }
    printf("\nChoose filling of array: ");
    printf("\n'1' for Ordered");
    printf("\n'2' for Unordered");
    printf("\n'3' for Inversely Ordered");
    printf("\nInput: ");
    scanf("%d", &filling);
    if(mode == 1)
    {
        switch(filling) //choose to call the desired function to fill the vector
        {
        case 1:
            ordered_filling_vec();
            fflush(stdin);
            break;
        case 2:
            unordered_filling_vec();
            fflush(stdin);
            break;
        case 3:
            inversely_ordered_filling_vec();
            fflush(stdin);
            break;
        default:
            printf("\nError number mode.\n");
            fflush(stdin);
            break;
        }
        out_vec();
    }
    else if(mode == 2)//select to call the desired function to fill the 3D array
    {
        switch(filling) 
        {
        case 1:
            ordered_filling_3d_array();
            fflush(stdin);
            break;
        case 2:
            unordered_filling_3d_array();
            fflush(stdin);
            break;
        case 3:
            inversely_ordered_filling_3d_array();
            fflush(stdin);
            break;
        default:
            printf("\nError number mode.\n");
            fflush(stdin);
            break;
        }
        out_3darray();
    }
    printf("\nChoose the algorithm of sorting:");
    printf("\n'1' for Selection Sort #6");
    printf("\n'2' for Hybrid Selection #1-Exchange");
    printf("\n'3' for ShellSort #2");
    printf("\nInput: ");
    scanf("%d", &sort);
    if(mode == 1)
    {
        switch(sort) //choose to call the desired function to sort the vector
        {
        case 1:
            printf("\ntime %3.3f", Select_6());
            fflush(stdin);
            break;
        case 2:
            printf("\ntime %3.3f",Select_1_Exchange());
            fflush(stdin);
            break;
        case 3:
            printf("\ntime %3.3f", Shell_2());
            fflush(stdin);
            break;
        default:
            printf("\nError number mode.\n");
            fflush(stdin);
            break;
        }
        out_vec();
    }
    else if(mode == 2)
    {
        switch(sort) //select to call the desired function to sort the 3D array
        {
        case 1:
            printf("\ntime %3.3f",Select_6_3DArr());
            fflush(stdin);
            break;
        case 2:
            printf("\ntime %3.3f", Select_1_Exchange_3DArr());
            fflush(stdin);
            break;
        case 3:
            printf("\ntime %3.3f",Shell_2_3DArr());
            fflush(stdin);
            break;
        default:
            printf("\nError number mode.\n");
            fflush(stdin);
            break;
        }
        out_3darray();
    }
    Arr3D_free;
    printf("\nPress any key to return to Main Menu.");
    getch();
    system("cls");
}
void Arr3D_declaration()//three-dimensional array declaration
{
    Arr3D = (int***) malloc(P*sizeof(int**));
    for (int k=0; k<P; k++)
    {
        Arr3D[k] = (int**) malloc(M*sizeof(int*));
        for (int i=0; i<M; i++)
            Arr3D[k][i] = (int*) malloc(N*sizeof(int));
    }
}
void Arr3D_free()//freeing memory
{
    for (int k=0; k<P; k++)
    {
        for (int i=0; i<M; i++)
            free(Arr3D[k][i]);
        free(Arr3D[k]);
    }
    free(Arr3D);
}
