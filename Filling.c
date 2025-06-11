#include <stdlib.h>
#include "Filling.h"
#include "Menu.h"
void ordered_filling_vec() //ordered filling of the vector
{
    int number = 0;
    for(int i = 0; i < P; i++)
    {
        Vec[i] = number++;
    }
}
void unordered_filling_vec() //disordered filling of the vector
{
    int number = 0;
    srand(time(NULL));
    for(int i = 0; i < P; i++)
    {
        Vec[i] = rand()%P;
    }
}
void inversely_ordered_filling_vec() //reverse ordered filling of the vector
{
    int number = P;
    for (int i = 0; i < P; i++)
    {
        Vec[i] = number--;
    }
}
void ordered_filling_3d_array() //ordered filling of the three-dimensional array
{
    int number = 0;
    for (int k = 0; k < P; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < M; i++)
            {
                Arr3D[k][i][j] = number++;
            }

        }

    }
}
void unordered_filling_3d_array() //disordered filling of the three-dimensional array
{
    int number = 0;
    srand(time(NULL));
    for (int k = 0; k < P; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < M; i++)
            {
                Arr3D[k][i][j] = rand()%(P*M*N);
            }

        }

    }
}
void inversely_ordered_filling_3d_array() //reverse ordered filling of the three-dimensional array
{
    int number = P*M*N;
    for (int k = 0; k < P; k++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < M; i++)
            {
                Arr3D[k][i][j] = number--;
            }

        }

    }
}
