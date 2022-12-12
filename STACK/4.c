#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int isEmpty(int top, int stack_arr[]);
void push(int x, int *top, int stack_arr[]);
int pop(int *top, int stack_arr[]);
void DecTohexa(int num);

void main()
{
    int N;
    printf("Enter an integer : ");
    scanf("%d", &N);
    printf("hexa Equivalent is : ");
    DecTohexa(N);
}

void DecTohexa(int N)
{
    int stack[MAX], top = -1, rem;
    while (N != 0)
    {
        rem = N % 16;
        push(rem, &top, stack);
        N /= 16;
    }
    while (top != -1)
        printf("%d", pop(&top, stack));
    printf("\n");
}
void push(int x, int *top, int stack_arr[])
{
    if (*top == (MAX - 1))
        printf("Stack Overflow\n");
    else
    {
        *top = *top + 1;
        stack_arr[*top] = x;
    }
}

int pop(int *top, int stack_arr[])
{
    int x;
    if (*top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    else
    {
        x = stack_arr[*top];
        *top = *top - 1;
    }
    return x;
}
