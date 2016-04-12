/*
Write a program to generate elements of a matrix in spiral order.
Store the generated elements in single dimensional array and return that array.

Directions for Spiral are : Go Right ,Go Down ,Go Left, Go Up
Ex:

Matrix:
1	2	3
4	5	6
7	8	9

Spiral order:
1	2	3	6	9	8	7	4	5

Given matrix is a two dimensional array(input_array) with dimensions rows, columns.
If rows, columns are invalid then return NULL.
If input_array is NULL then return NULL.

Example Input :
int board[2][3]={
				 {4,6,7},
				 {1,3,8}
				};
spiral(2,2,(int **)board); // Rows followed by columns followed by board

Example Output : Return an array consisting of {4,6,7,8,3,1};

Note : Check the function Parameters ,Its a double pointer .

*/


#include "stdafx.h"
#include<stdlib.h>

void recursive_spiral(int **arr, int sx, int sy, int rows, int columns, int *ans, int i, int col) {  
	if (sx >= rows || sy >= columns ) {
		return;
	}
	// top
	int x = sx, y = sy;
	while (y < columns){
		ans[i] = arr[x][y];
		i++;
		y++;		
	}
	// right
	y--;
	while (++x < rows) {
		ans[i] = arr[x][y];
		i++;
	}
	// bottom
	x--;
	if (x != sx) {
		while (--y >= sy) {
			ans[i] = arr[x][y];
			i++;
		}
	}	
	// left
	y++;
	x--;
	while (x > sx) {
		ans[i] = arr[x][y];
		i++;
		x--;
	}
	recursive_spiral(arr, sx + 1, sy + 1, rows - 1, columns - 1, ans, i, col);
}

int *spiral(int rows, int columns, int **input_array)
{
	if (!input_array || rows < 1 || columns < 1) {
		return NULL;
	}
	int * ans = (int *)malloc(sizeof(int) * (rows * columns));
	int i = 0;
	recursive_spiral(input_array, 0, 0, rows, columns, ans, i, columns);
	return ans;
}
