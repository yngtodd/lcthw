#include <stdio.h>

int main(int argc, char *argv[]) {
    int numbers[5] = {};
    char name[5] = {'a'};

    printf("Let's take a look non-initialized integer array:\n");
    for(int i=0; i<5; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nWhat happens when we loop to print the char array?\n");
    printf("Keep in mind, our char array is of size %lu\n", sizeof(name));
    for(int i=0; i<5; i++) {
        printf("%c ", name[i]);
    }

    printf("\nLet's take a look at each char in the array: %c %c %c %c %c\n",
            name[0], name[1], name[2], name[3], name[4]);

    printf("We cannot see the remaining elements of the char array until we set them.\n");
    // initialize the long way.
    name[0] = 'T';
    name[1] = 'o';
    name[2] = 'd';
    name[3] = 'd';
    name[4] = '\0';

    printf("Let's spell out the characters from the array: ");
    for(int i=0; i<5; i++) {
        // Spell it out
        printf("%c ", name[i]);
    }

    printf("\nName: %s\n", name);

    return 0;
}
