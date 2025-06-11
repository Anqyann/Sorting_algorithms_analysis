#include <stdlib.h>
#include "Filling.h"
#include "Menu.h"
void ordered_filling_vec() //впорядковане заповнення вектора
{
    int number = 0;
    for(int i = 0; i < P; i++)
    {
        Vec[i] = number++;
    }
}
void unordered_filling_vec() //невпорядковане заповнення вектора
{
    int number = 0;
    srand(time(NULL));
    for(int i = 0; i < P; i++)
    {
        Vec[i] = rand()%P;
    }
}
void inversely_ordered_filling_vec() //обернено впорядковане заповнення вектора
{
    int number = P;
    for (int i = 0; i < P; i++)
    {
        Vec[i] = number--;
    }
}
void ordered_filling_3d_array() //впорядковане заповнення тривимвірного масиву
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
void unordered_filling_3d_array() //невпорядковане заповнення тривимвірного масиву
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
void inversely_ordered_filling_3d_array() //обернено впорядковане заповнення тривимвірного масиву
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
