#include "Menu.h"
#include "Vector_Sort.h"
clock_t Select_6() //sorting of the direct selection method for a vector
{
    int imin, tmp;
    clock_t time_start, time_stop;
    time_start = clock();
    for(int s = 0; s < P - 1; s++)
    {
        imin = s;
        for(int i = s + 1; i < P; i++)
            if (Vec[i] < Vec[imin]) imin = i;
        if (imin != s)
        {
            tmp = Vec[imin];
            Vec[imin] = Vec[s];
            Vec[s] = tmp;
        }
    }
    time_stop = clock();
    return time_stop - time_start;
}
clock_t Select_1_Exchange() //sorting "choice - exchange" for vector
{
    int Min;
    clock_t time_start, time_stop;
    time_start = clock();
    for(int s = 0; s < P - 1; s++)
    {
        Min = Vec[s];
        for(int i = s + 1; i < P; i++)
            if (Vec[i] < Min)
            {
                Min = Vec[i];
                Vec[i] = Vec[s];
                Vec[s] = Min;
            }
    }
    time_stop = clock();
    return time_stop - time_start;
}
clock_t Shell_2() //Shell's sorting  for vector
{
    int tmp, t, j, k;
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
            while (j >= k && Vec[j] < Vec[j - k])
            {
                tmp = Vec[j];
                Vec[j] = Vec[j - k];
                Vec[j - k] = tmp;
                j = j - k;
            }
        }
    }
    time_stop = clock();
    return time_stop - time_start;
}
