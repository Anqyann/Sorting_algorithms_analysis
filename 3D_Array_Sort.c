#include "Menu.h"
#include "3D_Array_Sort.h"
clock_t Select_6_3DArr() //sorting of the direct selection method for a three-dimensional array
{
    int imin, tmp;
    clock_t time_start, time_stop;
    time_start = clock();
    for(int s = 0; s < P - 1; s++)
    {
        imin = s;
        for(int i = s + 1; i < P; i++)
            if (Arr3D[i][0][0] < Arr3D[imin][0][0]) imin = i;
        if (imin != s)
        {
            for(int k = 0; k < M; k++)
            {
                for(int j = 0; j < N; j++)
                {
                    tmp = Arr3D[imin][k][j];
                    Arr3D[imin][k][j] = Arr3D[s][k][j];
                    Arr3D[s][k][j] = tmp;
                }
            }

        }
    }
    time_stop = clock();
    return time_stop - time_start;
}
clock_t Select_1_Exchange_3DArr()//sorting "selection - exchange" for a three-dimensional array
{
    int Min, tmp;
    clock_t time_start, time_stop;
    time_start = clock();
    for(int s = 0; s < P - 1; s++)
    {
        Min = Arr3D[s][0][0];
        for(int i = s + 1; i < P; i++)
        {
            if (Arr3D[i][0][0] < Min)
            {
                Min = Arr3D[i][0][0];
                for(int k = 0; k < M; k++)
                {
                    for(int j = 0; j < N; j++)
                    {
                        tmp = Arr3D[i][k][j];
                        Arr3D[i][k][j] = Arr3D[s][k][j];
                        Arr3D[s][k][j] = tmp;
                    }
                }
            }
        }
    }
    time_stop = clock();
    return time_stop - time_start;
}
clock_t Shell_2_3DArr()//Shell's sorting for a three-dimensional array
{
    int tmp, t, j, k, tmp2;
    clock_t time_start, time_stop;
    time_start = clock();
    if (P < 4) t = 1;
    else t = (int)log2f((float)P) - 1;
    int Stages[t];
    Stages[t - 1] = 1;
    for (int i = t - 2; i >= 0; i--)
        Stages[i] = 2 * Stages[i + 1] + 1;
    for (int p = 0; p < t; p++)
    {
        k = Stages[p];
        for (int i = k; i < P; i++)
        {
            j = i;
            while (j >= k && Arr3D[j][0][0] < Arr3D[j - k][0][0])
            {
                for(int f = 0; f < M; f++)
                {
                    for(int m = 0; m < N; m++)
                    {
                        tmp2 = Arr3D[j][f][m];
                        Arr3D[j][f][m] = Arr3D[j - k][f][m];
                        Arr3D[j - k][f][m] = tmp2;

                    }
                }
                j = j - k;
            }
        }
    }
    time_stop = clock();
    return time_stop - time_start;
}
