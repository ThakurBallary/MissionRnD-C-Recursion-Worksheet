#include "stdafx.h"
#include <stdlib.h>

#include "FunctionHeaders.h"

void generate_array(int **input_array, int rows, int columns, int seq)
{
	int k = 0;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			input_array[i][j] = (k++)*seq;
}

int main(){
	
	//Check NSnipers


	//Check CountPairs Sample Code 
	/*
	char str[4][10] = { { "aba" }, { "abab" }, { "abbbb" }, { "zzzaz" } };
	int len[] = { 3, 4, 5, 5 };
	for (int i = 0; i < 4; i++) {
		printf("%d\n", count_pairs_wrapper(str[i], len[i]));
	}
	*/

	//Check Steps Sample Code
	/*
	int ways = get_steps(5);
	printf("%d\n", ways);
	*/

	//Check Spiral Sample Code
	/*
	int rows = 5, columns = 5;
	int **input_array = (int **)malloc(rows * sizeof(int *));
	for (int i = 0; i < rows; i++)
		input_array[i] = (int *)malloc(columns * sizeof(int));

	generate_array((int**)input_array, rows, columns, 1);

	int *output_array = spiral(rows, columns, (int**)input_array);
	for (int i = 0; i < 10; i++) {
		printf("%d ", output_array[i]);
	}
	printf("\n");
	*/
	
	//Check Maze Sample Code
	/*
	int maze[4][3] = {
		{ 0, 0, 1 },
		{ 1, 1, 1 },
		{ 1, 0, 1 },
		{ 1, 0, 1 }
	};

	int m = 4, n = 3;
	int x1 = 3, y1 = 0, x2 = 0, y2 = 2;

	int check=path_exists(&maze[0][0], m, n, x1, y1, x2, y2);
	printf("%d\n", check);
	*/
	/*
	int maze[6][1] = {
		{ 1 },
		{ 1 },
		{ 1 },
		{ 1 },
		{ 0 },
		{ 1 }
	};
	int m = 6, n = 1;
	int x1 = 0, y1 = 0, x2 = 5, y2 = 0;
	int check = path_exists((int*)maze, m, n, x1, y1, x2, y2);
	printf("%d\n", check);
	*/
	return 0;
}