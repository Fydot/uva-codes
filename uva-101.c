#include <stdio.h>
#include <stdlib.h>

const int hdd = 1;

typedef struct b{
    int value;
    struct b *next;
} block;

block *blocks[25]; /* Heaps */
block tail = {-1, NULL}; /* Tail */
int block_heap[25]; /*Heaps of blocks*/


void init_heaps(int n)
{
    int i = 0;
    for(i = 0; i < n; i++) {
        block *node = (block *)malloc(sizeof(block));
        node -> value = i;
        node -> next = &tail;
        blocks[i] = node;
    }
}


void destroy_heaps(int n)
{
    int i = 0;
    for(i = 0; i < n; i++) {
        block *node = (block *)malloc(sizeof(block));
        blocks[i] = node;
    }
}


int main(void)
{
    int n;
    while(~scanf("%d", &n)) {
        init_heaps(n);

        int i;
        for(i = 0; i < n; i++) {
            block *start = blocks[i];
            printf("%d: ", i);
            while(start -> next) {
                printf("%d ", start -> value);
                start = start -> next;
            }
            puts("");
        }
    }
}
