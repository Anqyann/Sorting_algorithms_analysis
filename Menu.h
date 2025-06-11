#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
void menu();//main menu
//array dimensions
#define P 8000 //number of sections
#define M 400 //number of rows
#define N 2 //number of columns
int Vec[P]; //declaration of a vector of length P
int ***Arr3D; //declaration of a three-dimensional array
void Arr3D_declaration(); //function for declaring a dynamic three-dimensional array
void Arr3D_free(); //function for freeing memory
#endif // MENU_H_INCLUDED
