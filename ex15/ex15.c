#include <stdio.h>

void print_separator() {
    printf("\n---\n");
}

int main(int argc, char **argv) {
    int ages[] = {29, 30, 27, 21};
    char *names[] = {"Mat", "Todd", "Camille", "Jacob"};

    int num_ages = sizeof(ages) / sizeof(int);

    printf("Standard iteration:\n");
    for(int i=0; i < num_ages; i++) {
        printf("%s is %d years old\n", names[i], ages[i]);
    }

    print_separator();

    // Setup pointers to the start of the arrays.
    int *cur_age = ages;
    char **cur_name = names;

    printf("\nFirst pointer approach:\n");
    for(int i=0; i < num_ages; i++) {
        printf("%s is %d years old\n", *(cur_name + i), *(cur_age + i));
    }

    print_separator();

    printf("\nSecond pointer approach:");
    for(int i=0; i < num_ages; i++) {
        printf("%s is %d years old\n", cur_name[i], cur_age[i]);
    }

    print_separator();

    printf("\nStupid complex pointer usage:\n");
    for(cur_name = names, cur_age = ages; (cur_age - ages) < num_ages; cur_name++, cur_age++) {
            printf("%s is %d years old\n", *cur_name, *cur_age);
    }

    return 0;
}
