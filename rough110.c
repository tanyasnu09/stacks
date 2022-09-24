#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
    int size;
    int top;
    int data;
    int *arr;
} Stack;

void push( Stack*s ,  char data)
{
    s->top++;
    s->arr[s->top] = data;
}

int main()
{
    struct Stack *s = (struct Stack* ) malloc (sizeof(struct Stack));

    s->size = 100;
    s->top = -1;
    s->arr = (int* ) malloc (s->size* sizeof(int));
    char array[6] = "snu";
    char array2[3] ="ioe";
    push( s, array[0]);


    printf(" %c", s->arr[s->top]);
    push (s, array[1]);
     printf(" %c", s->arr[s->top]);
       push (s, array[2]);
       printf(" %c\n", s->arr[s->top]);
       push (s, array2[0]);
        printf(" %c", s->arr[s->top]);

         push (s, array2[1]);
         printf(" %c", s->arr[s->top]);
          push (s, array2[2]);
          printf(" %c", s->arr[s->top]);






}