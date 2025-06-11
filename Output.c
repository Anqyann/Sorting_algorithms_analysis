#include "Menu.h"
#include "Output.h"
void out_vec() //output vector to screen
{
    printf("\nVector:\n");
    for(int i = 0; i < P; i++)
    {
        printf("%3d", Vec[i]);
    }
}
void out_3darray() //output 3D array sections
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
