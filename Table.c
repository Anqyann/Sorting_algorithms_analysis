#include "Table.h"
#include "Measurement.h"
#include "Menu.h"
#include "Vector_Sort.h"
#include "3D_Array_Sort.h"
#include "Filling.h"
float ordered, unordered, inversely_ord; //змінні для виводу часу для впорядкованого, невпорядкованого, обернено впорядкованого масиву
void table() //функція для виводу таблиці часу сортування
{
    system("cls");
    printf("\n For Vector");
    printf("\n P = %d\n", P);
    printf("\n \t\t\tOrdered \tUnordered \tInversely ordered");
    vec_fill_sort(1,1);
    vec_fill_sort(2,1);
    vec_fill_sort(3,1);
    printf("\n Select(6) \t\t%6.3f \t%15.3f \t%10.3f", ordered, unordered, inversely_ord);
    vec_fill_sort(1,2);
    vec_fill_sort(2,2);
    vec_fill_sort(3,2);
    printf("\n Select(1)Exchange \t%6.3f \t%15.3f \t%10.3f", ordered, unordered, inversely_ord);
    vec_fill_sort(1,3);
    vec_fill_sort(2,3);
    vec_fill_sort(3,3);
    printf("\n Shell(2) \t\t%6.3f \t%17.3f \t%11.3f\n", ordered, unordered, inversely_ord);

    printf("\n For 3DArray");
    printf("\n P = %d, M = %d, N = %d\n", P, M ,N);
    printf("\n \t\t\tOrdered \tUnordered \tInversely ordered");
    arr3d_fill_sort(1,1);
    arr3d_fill_sort(2,1);
    arr3d_fill_sort(3,1);
    printf("\n Select(6) \t\t%6.3f \t%15.3f \t%10.3f", ordered, unordered, inversely_ord);
    arr3d_fill_sort(1,2);
    arr3d_fill_sort(2,2);
    arr3d_fill_sort(3,2);
    printf("\n Select(1)Exchange \t%6.3f \t%17.3f \t%15.3f", ordered, unordered, inversely_ord);
    arr3d_fill_sort(1,3);
    arr3d_fill_sort(2,3);
    arr3d_fill_sort(3,3);
    printf("\n Shell(2) \t\t%6.3f \t%16.3f \t%15.3f", ordered, unordered, inversely_ord);
    printf("\nPress any key to return to Main Menu.");
    getch();
    system("cls");
}
void vec_fill_sort(int filling, int sorting)//процедура для заповнення і сортування вектору вказаним чином
{
    switch(filling) //вибір заповнення вектору
    {
    case 1:
        switch(sorting) //вибір сортування вектору
        {
        case 1:
            for (int i = 0; i < measurements_number; i++)
            {
                ordered_filling_vec();
                Res[i] = Select_6();
            }
            ordered = MeasurementProcessing();
            break;
        case 2:
            for (int i = 0; i < measurements_number; i++)
            {
                ordered_filling_vec();
                Res[i] = Select_1_Exchange();
            }
            ordered = MeasurementProcessing();
            break;
        case 3:
            for (int i = 0; i < measurements_number; i++)
            {
                ordered_filling_vec();
                Res[i] = Shell_2();
            }
            ordered = MeasurementProcessing();
            break;
        }
        break;
    case 2:
        switch(sorting)
        {
        case 1:
            for (int i = 0; i < measurements_number; i++)
            {
                unordered_filling_vec();
                Res[i] = Select_6();
            }
            unordered = MeasurementProcessing();
            break;
        case 2:
            for (int i = 0; i < measurements_number; i++)
            {
                unordered_filling_vec();
                Res[i] = Select_1_Exchange();
            }
            unordered = MeasurementProcessing();
            break;
        case 3:
            for (int i = 0; i < measurements_number; i++)
            {
                unordered_filling_vec();
                Res[i] = Shell_2();
            }
            unordered = MeasurementProcessing();
            break;
        }
        break;
        case 3:
            switch(sorting)
        {
        case 1:
            for (int i = 0; i < measurements_number; i++)
            {
                inversely_ordered_filling_vec();
                Res[i] = Select_6();
            }
            inversely_ord = MeasurementProcessing();
            break;
        case 2:
            for (int i = 0; i < measurements_number; i++)
            {
                inversely_ordered_filling_vec();
                Res[i] = Select_1_Exchange();
            }
            inversely_ord = MeasurementProcessing();
            break;
        case 3:
            for (int i = 0; i < measurements_number; i++)
            {
                inversely_ordered_filling_vec();
                Res[i] = Shell_2();
            }
            inversely_ord = MeasurementProcessing();
            break;
        }
        break;
    }
}
void arr3d_fill_sort(int filling, int sorting) //процедура для заповнення і сортування 3Д масиву вказаним чином
{
    Arr3D_declaration(); //оголошення 3Д масиву
    switch(filling) //вибір наповнення масиву
    {
    case 1:
        switch(sorting) //вибір сортування масиву
        {
        case 1:
            for (int i = 0; i < measurements_number; i++)
            {
                ordered_filling_3d_array();
                Res[i] = Select_6_3DArr();
            }
            ordered = MeasurementProcessing();
            break;
        case 2:
            for (int i = 0; i < measurements_number; i++)
            {
                ordered_filling_3d_array();
                Res[i] = Select_1_Exchange_3DArr();
            }
            ordered = MeasurementProcessing();
            break;
        case 3:
            for (int i = 0; i < measurements_number; i++)
            {
                ordered_filling_3d_array();
                Res[i] = Shell_2_3DArr();
            }
            ordered = MeasurementProcessing();
            break;
        }
        break;
    case 2:
        switch(sorting)
        {
        case 1:
            for (int i = 0; i < measurements_number; i++)
            {
                unordered_filling_3d_array();
                Res[i] = Select_6_3DArr();
            }
            unordered = MeasurementProcessing();
            break;
        case 2:
            for (int i = 0; i < measurements_number; i++)
            {
                unordered_filling_3d_array();
                Res[i] = Select_1_Exchange_3DArr();
            }
            unordered = MeasurementProcessing();
            break;
        case 3:
            for (int i = 0; i < measurements_number; i++)
            {
                unordered_filling_3d_array();
                Res[i] = Shell_2_3DArr();
            }
            unordered = MeasurementProcessing();
            break;
        }
        break;
        case 3:
            switch(sorting)
        {
        case 1:
            for (int i = 0; i < measurements_number; i++)
            {
                inversely_ordered_filling_3d_array();
                Res[i] = Select_6_3DArr();
            }
            inversely_ord = MeasurementProcessing();
            break;
        case 2:
            for (int i = 0; i < measurements_number; i++)
            {
                inversely_ordered_filling_3d_array();
                Res[i] = Select_1_Exchange_3DArr();
            }
            inversely_ord = MeasurementProcessing();
            break;
        case 3:
            for (int i = 0; i < measurements_number; i++)
            {
                inversely_ordered_filling_3d_array();
                Res[i] = Shell_2_3DArr();
            }
            inversely_ord = MeasurementProcessing();
            break;
        }
        break;
    }
    Arr3D_free(); //звіленння пам'яті
}
