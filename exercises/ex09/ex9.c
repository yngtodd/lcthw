#include <stdio.h>

int main(int argc, char *argv[]){
    // create an array from 0 to 24
    int i = 0;
    while(i < 25){
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // create an array from 24 to 0.
    int elem = 24;
    int numbers[25] = {};
    for(int i=0; i < 24; i++){
        numbers[i] = elem;
        elem--;
    }

    for(int i=0; i < 25; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
