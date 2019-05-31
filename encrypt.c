#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv) {

    char square[5][5];
    int size;
    char input[50];
    char b;
    int i,j,k;
    //int dig1,dig2;
    square[0][0] = 'c';
    square[0][1] = 'r';
    square[0][2] = 'a';
    square[0][3] = 'z';
    square[0][4] = 'y';
    square[1][0] = 'b';
    square[1][1] = 'd';
    square[1][2] = 'e';
    square[1][3] = 'f';
    square[1][4] = 'g';
    square[2][0] = 'h';
    square[2][1] = 'i';
    square[2][2] = 'j';
    square[2][3] = 'k';
    square[2][4] = 'l';
    square[3][0] = 'm';
    square[3][1] = 'n';
    square[3][2] = 'o';
    square[3][3] = 'p';
    square[3][4] = 's';
    square[4][0] = 't';
    square[4][1] = 'u';
    square[4][2] = 'v';
    square[4][3] = 'w';
    square[4][4] = 'x';



    fgets(input, 50, stdin);    //read string from keyboard
    size = strlen(input);       //calculate its length
    if (input != NULL) {

      for ( i = 0; i < size; i++) {
        b = input[i];   // read letter from string

        for ( j = 0; j < 5; j++) {

          for ( k = 0; k < 5; k++) {
            if(b == 'q'){
                printf("32");
            }
            
            else if (b == square[j][k]) {
                //if input letter matches with array element
                //then print its location(j,k)
                //int firstLetter = j + 1;
                //int secondLetter = k + 1;
                printf("%d%d", j, k);
                break;
                
            }

          }

        }

      }

    }

    return 0;
}

