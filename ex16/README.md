### Structs and Pointers to them
___

Structuring related bits of memory to keep ourselves sorted (sort of).

The Game struct:
```c
// Keep related information bundled together.
struct Game {
    char *name;
    char *type;
    int year_created;
    int rating;
}
```
