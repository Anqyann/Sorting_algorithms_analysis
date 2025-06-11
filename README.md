# Sorting_algorithms_analysis

This program sorts a three-dimensional array Arr3D[P][M][N] using multiple sorting algorithms:

- Direct selection sort 
- Hybrid "selection - exchange" algorithm 
- Shell sort, implemented as a hybrid insertion-exchange algorithm

The sorting rearranges the array sections so that the values of the vector of the first elements of each section A[*, 0, 0] are in non-decreasing order.

The program performs sorting and creating time table for both:

- The vector A[*, 0, 0]
- The full 3D array Arr3D[P][M][N]

For each case, the program outputs a timing table for three input states:

- Ordered
- Unordered
- Inversely ordered

The program is written in C language.

Description of program modules

int main() – the main function of the program. Responsible for calling the menu.

Module “3D_Array_Sort”:

- clock_t Select_6_3DArr() – procedure for sorting a three-dimensional array using the direct selection method.--
- clock_t Select_1_Exchange_3DArr() – procedure for sorting a three-dimensional array using the hybrid “selection-exchange” method.
- clock_t Shell_2_3DArr() – procedure for sorting a three-dimensional array using the Shell method.

Module “Menu”:

- void menu() – main menu function. Has four modes:
- Filling, sorting and outputting a vector;
- Filling, sorting and outputting a three-dimensional array;
- Outputting the main table with the sorting time of each algorithm for a vector and a three-dimensional array;
- Exiting the program.
- void menu_arr_sort(int mode) – accepts the sorting mode value (1 – for a vector, 2 – for a three-dimensional array), which is specified by the user. In this block, the specified functions for filling the array, sorting, and outputting the sorted array are called.
- void Arr3D_declaration() – in this procedure, a dynamic three-dimensional array is declared.
- void Arr3D_free() – the procedure is responsible for freeing the memory of a dynamic three-dimensional array.

Module “Vector_Sort”:

- clock_t Select_6() - procedure for sorting a vector using the direct selection method No. 6.
- clock_t Select_1_Exchange() – procedure for sorting a vector using the hybrid method “selection No. 1 – exchange”.
- clock_t Shell_2() – procedure for sorting a vector using the Shell method No. 2.

Module “Filling”:

- void ordered_filling_vec() – procedure for ordered filling of a vector.
- void unordered_filling_vec() – procedure for unordered filling of a vector.
- void inversely_ordered_filling_vec() – procedure for inversely ordered filling of a vector.
- void ordered_filling_3d_array() – procedure for ordered filling of a three-dimensional array.
- void unordered_filling_3d_array() – procedure for unordered filling of a three-dimensional array.
- void inversely_ordered_filling_3d_array() – procedure for inversely ordered filling of a three-dimensional array.

Module “Measurement”:

- float MeasurementProcessing() – function returns average sorting time of each algorithm.

Module “Table”:

- void table() – procedure responsible for outputting a table with time of each sorting and each case of ordering of a vector, three-dimensional array.

- void vec_fill_sort(int filling, int sorting) – procedure responsible for the specified filling and sorting of a vector. Accepts a value that specifies the filling (1 – ordered, 2 – unordered, 3 – reversely ordered) and the sorting algorithm (1 – direct selection sorting algorithm; 2 – hybrid selection-exchange sorting algorithm; 3 – Shell sort). Calls the appropriate functions and fills the array for further calculation of the average sorting time. 

- void arr3d_fill_sort(int filling, int sorting) – procedure responsible for the specified filling and sorting of a three-dimensional array. Accepts a value that specifies the filling (1 – ordered, 2 – unordered, 3 – reversely ordered) and the sorting algorithm (1 – direct selection sorting algorithm; 2 – hybrid selection-exchange sorting algorithm; 3 – Shell sort). Calls the appropriate functions and fills the array for further calculation of the average sorting time.

Output module:

- void out_vec() – procedure that outputs a vector to the screen.
- void out_3darray() – procedure that outputs a three-dimensional array to the screen.


Prerequisites:

- C compiler (e.g. GCC)
  
Example output:
  
For Vector  
`P = 6000`

| Algorithm         | Ordered | Unordered | Inversely ordered |
|------------------|---------|-----------|-------------------|
| Select(6)        | 39.500  | 38.450    | 38.000            |
| Select(1)Exchange| 39.900  | 100.300   | 45.250            |
| Shell(2)         | 0.050   | 1.000     | 0.050             |



For 3D Array  
`P = 6000, M = 16, N = 16`

| Algorithm         | Ordered | Unordered | Inversely ordered |
|------------------|---------|-----------|-------------------|
| Select(6)        | 70.450  | 82.200    | 81.300            |
| Select(1)Exchange| 57.700  | 14080.150 | 28273.199         |
| Shell(2)         | 0.450   | 136.400   | 46.850            |
