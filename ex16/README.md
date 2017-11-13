### Structs and Pointers to them
Structuring related bits of memory to keep ourselves sorted (sort of).
___

#### The Game struct:
```c
#include <stdio.h>
#include <assert.h>

// Keeps related information bundled together.
struct Game {
    char *name;
    char *type;
    int year_created;
    int rating;
}

struct Game *Game_create(char *name, char *type, int year_created, int rating) {
    struct Game *what = malloc(sizeof(struct Game));
    assert(what != NULL);

    what->name = strdup(name);
    what->type = strdup(type);
    what->year_created = year_created;
    what->rating = rating;

    return what;
}
```
