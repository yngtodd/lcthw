#include <stdio.h>

int main(int argc, char *argv[]) {
    for(int i=1; i<argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    long num_cities = 3;
    char *cities[] = {"Seattle", "London", "Montreal"};
    for(int i = 0; i < num_cities; i++) {
        printf("City %d: %s\n", i, cities[i]);
    }

    return 0;
}
