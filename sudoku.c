#define _XOPEN_SOURCE 600 // required for barriers to work
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdbool.h>

#define NUM_THREADS 11
#define GRID_SIZE 9

//structure for passing data to threads 
typedef struct{
    int row; 
    int column;
} parameters; 

//declare gloabal variables 
int sudoku_grid[GRID_SIZE][GRID_SIZE];
int results[NUM_THREADS];

/* thread function to validate a row */
void *validate_row(void *params) {

}

void *validate_column(void *params) {
}

void *validate_subgrid(void *params) {
}

int main() {


    
}

