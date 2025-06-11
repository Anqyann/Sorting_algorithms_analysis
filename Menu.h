#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
void menu();//головне меню
//розміри масиву
#define P 8000 //кількість перерізів
#define M 400 //кількість рядків
#define N 2 //кількість стовпців
int Vec[P]; //оголошення вектора довжиною P
int ***Arr3D; //оголошення тривимірного масиву
void Arr3D_declaration(); //функція оголошення динамічного тривимірного масиву
void Arr3D_free(); //функція для звільнення пам'яті
#endif // MENU_H_INCLUDED
