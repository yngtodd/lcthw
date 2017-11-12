#include <stdio.h>

int main(int argc, char *argv[]){
    if (argc == 1){
        printf("You only have one argument. Try some more.\n");
    } else if (argc > 1 && argc < 8){
        printf("Here's your arguments:\n");
        for(int i=0; i < argc; i++){
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("You have too many arguments. Simmer down.\n");
    }
    return 0;
}
