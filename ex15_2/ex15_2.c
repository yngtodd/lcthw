#include <stdio.h>

int main(int argc, char *argv[]) {
    int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *cur_num = nums;

    int len_nums = sizeof(nums) / sizeof(int);
    for(int i=0; i<len_nums; i++) {
        printf("\nnums[] lives at %p\n", &nums);
        printf("*cur_num lives at %p\n", &*cur_num);

        printf("\nPointer *cur_num is pointing to %d\n", cur_num[i]);
        printf("The address *cur_num is pointing to: %p\n", &cur_num[i]);
        printf("Which is the same as %p\n", &nums[i]);
    }

    return 0;
}
