#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    int row, col, i, j, k, NUM_ROWS, NUM_COLS;
    char input[50], b;
    

    char matrix[5][5] = {
        {'c', 'r', 'a', 'z', 'y'},
        {'b', 'd', 'e', 'f', 'g'},
        {'h', 'i', 'j', 'k', 'l'},
        {'m', 'n', 'o', 'p', 's'},
        {'t', 'u', 'v', 'w', 'x'}};


    NUM_ROWS = 5;
    NUM_COLS = 5;
    for (row = 0; row < NUM_ROWS; row++) {
        for (col = 0; col < NUM_COLS; col++) {
            printf("%c ", matrix[row][col]);
        }
        
        printf("\n"); // newline at the end of each row
    }
    
    int size;
    fgets(input, 50, stdin); // read numeric string in array
    size = strlen(input); //  calculate its size

    while (input[i] != '\n') {
        row = input[i] - '\0';
        col = input[i + 1] - '\0';

      for ( i = 0; i < size; i++) {
        b = input[i];   // read letter from string

        for (row = 0; row < NUM_ROWS; row++) {
          for (col = 0; col < NUM_COLS; col++) {
            if(b == 'q'){
                printf("32");
                
            }
            
            else if (b == matrix[j][k]) {
                printf("%d%d", j, k);
                break;
                
            }
          }
        }
      }
    }

    return 0;
}
