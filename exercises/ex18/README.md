## Pointers to Functions

Functions in C are really just pointers to a spot in the program where some code
lives. Just as we can create pointers to structs, strings, and arrays, we can
also point a pointer at a function. This can be used to pass callbacks to other
functions or even to simulate classes. Here we are going to make use of pointers
to create some callbacks.

Here is the format of a function pointer:

```c
int (*POINTER_NAME)(int a, int b)
```
