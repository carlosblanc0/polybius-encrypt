/*
file: polybiusDecrypt.c
sample input: 1112131415424344
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv) {

    char square[5][5];
    int size = sizeof (square);
    char input[50];

    int i, dig1, dig2;

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


    fgets(input, 26, stdin); //read numeric string in array

    size = strlen(input) - 1; //calculate its length
    if (size % 2 == 1)
        return 0; //if string size is odd means wrong input so exit

    for (i = 0; i < size; i = i + 2) {
        //read two letters from input string
        //convert it into two integers dig1, dig2
        dig1 = input[i] - 48; //convert char to its equivalent digit ( '2' into 2)
        dig2 = input[i + 1] - 48;
        
        //display the character specified by the two digits dig1, dig2
        printf("%c ", square[dig1 - 1][dig2 - 1]);
        
    }

    return 0;
}