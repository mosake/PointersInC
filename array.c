#include "array.h"

int main() {
  int **out;
  int rows = 5;
  int cols = 10;
  out = return2DArray(rows, cols);

  // output result
  for (int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
        printf("%d ", out[i][j]);
    }
    printf("\n");
  }
  destroy2D(out, rows, cols);
}

/**
Returns an m*n matrix with all 0 entries
**/
int ** return2DArray(int rows, int cols) {
    int **index = (int **)malloc(rows * sizeof(int *));
    // initalize each row to have space for column elements;
    for(int i = 0; i < rows; i++) {
      index[i] = (int *) malloc(cols * sizeof(int));
      // set each value to 0
      for(int j = 0; j < cols; j++) {
        index[i][j] = 0;
      }
    }
    return index;
}

/**
Frees memory for 2D array
**/
void destroy2D(int** arr, int rows, int cols) {
    // free entries
    for(int i = 0; i < rows; i++) {
	  free(arr[i]);
	}
    // free rest
	free(arr);
}
