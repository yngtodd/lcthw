#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("ERROR: You need at least one argument beyond your program name.\n");
        return 1;
    }

    // Zeroth argument is the name of the program.
    for(int i=0; i < argc; i++) {
        if (i == 0) {
            printf("\nLet's check for vowels in your argument(s)!\n");
        }

        printf("\nArgument %d:\n", i);

        for (int j=0; argv[i][j] != '\0'; j++) {
            char letter = argv[i][j];

            switch (letter){
                case 'a':
                case 'A':
                    printf("%d: 'A'\n", j);
                    break;

                case 'e':
                case 'E':
                    printf("%d: 'E'\n", j);
                    break;

                case 'i':
                case 'I':
                    printf("%d: 'I'\n", j);
                    break;

                case 'o':
                case 'O':
                    printf("%d: 'O'\n", j);
                    break;

                case 'u':
                case 'U':
                    printf("%d: 'U'\n", j);
                    break;

                case 'y':
                case 'Y':
                    // And only sometimes 'Y'.
                    printf("%d: %c is a tough one, I need to hear the sound.\n", j, letter);
                    break;

                default:
                    printf("%d: %c is not a vowel.\n", j, letter);
            }
        }
    }

    return 0;
}
