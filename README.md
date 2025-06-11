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
