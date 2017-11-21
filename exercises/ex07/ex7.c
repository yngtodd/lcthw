#include <stdio.h>

int main(int argc, char*agrv[]){
    int distance = 300;
    float power = 9000.0f;
    double super_power = 56789.4532;
    char initial = 'M';
    char first_name[] = "Todd";
    char last_name[] = "Young";

    printf("Teslas currently have a %d mile range.\n", distance);
    printf("Your power is over %f!\n", power);
    printf("You have %f super powers\n", super_power);
    printf("My first initial is %c.\n", initial);
    printf("My middle name in %s.\n", first_name);
    printf("My last name is %s.\n", last_name);

    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("The universe of defects has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n", part_of_universe);

    // this makes no sense, just a demo of something weird.
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n", care_percentage);

    return 0;
}
