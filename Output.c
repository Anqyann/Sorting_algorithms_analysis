#include "Menu.h"
#include "Output.h"
void out_vec() //вивід вектора на екран
{
    printf("\nVector:\n");
    for(int i = 0; i < P; i++)
    {
        printf("%3d", Vec[i]);
    }
}
void out_3darray() //вивід перерізів 3Д масиву
{
    printf("\n3D Array:\n");
    for (int k = 0; k < P; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < M; i++)
            {
                printf("%5d", Arr3D[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
