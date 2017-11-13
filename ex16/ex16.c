#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Game {
    char *name;
    char *type;
    int year_created;
    int rating;
};

struct Game *Game_create(char *name, char *type, int year_created, int rating) {
    struct Game *what = malloc(sizeof(struct Game));
    assert(what != NULL);

    what->name = strdup(name);
    what->type = strdup(type);
    what->year_created = year_created;
    what->rating = rating;

    return what;
}

void Game_destroy(struct Game *what) {
    assert(what != NULL);

    free(what->name);
    free(what);
}

void Game_print(struct Game *what) {
    printf("Name: %s\n", what->name);
    printf("\tType: %s\n", what->type);
    printf("\tYear created: %d\n", what->year_created);
    printf("\tRating: %d\n", what->rating);
}

int main(int argc, char *argv[]) {
    // Make two game structures
    struct Game *final_fantasyVII = Game_create("Final Fantasy VII", "JRPG", 1997, 100);
    struct Game *Go = Game_create("Go", "board game", -548, 99);

    // Print the games out and where they are in memory.
    printf("Final Fantasy VII is at memory location %p\n", final_fantasyVII);
    Game_print(final_fantasyVII);

    printf("\nGo is at memory location %p\n", Go);
    Game_print(Go);

    // Due to Twitter (and Deepmind) the games just got more popular!
    final_fantasyVII->rating += 10;
    Go->rating += 10;

    printf("\nCheck out the updated rating!\n");
    Game_print(final_fantasyVII);

    // Free up the memory held by those games.
    Game_destroy(final_fantasyVII);
    Game_destroy(Go);

    return 0;
}
