#include<stdio.h>
#include <limits.h>

#define ARRAY_SIZE 100
#define LEFT_STACK 0
#define RIGHT_STACK 1

    struct st
{
    int array[ARRAY_SIZE];
    int top1, top2;
} st;

void initialize()
{
    st.top1 = -1;
    st.top2 = ARRAY_SIZE;
}

void push(int stack, int num)
{
    if (stack == LEFT_STACK)
    {
        if (st.top1 < st.top2 - 1)
        {
            st.top1++;
            st.array[st.top1] = num;
        }
        else
        {
            printf("Left Stack Full");
            return;
        }
    }
    else if (stack == RIGHT_STACK)
    {
        if (st.top1 < st.top2 - 1)
        {
            st.top2--;
            st.array[st.top2] = num;
        }
        else
        {
            printf("Right Stack Full");
            return;
        }
    }
}

int pop(int stack)
{
    if (stack == LEFT_STACK)
    {
        if (st.top1 >= 0)
        {
            return st.array[st.top1--];
        }
        else
        {
            printf("Left Stack is Empty");
            return INT_MIN;
        }
    }
    else if (stack == RIGHT_STACK)
    {
        if (st.top2 <= ARRAY_SIZE - 1)
        {
            return st.array[st.top2++];
        }
        else
        {
            printf("Right Stack is Empty");
            return INT_MIN;
        }
    }
}

int main()
{
    initialize();
    /* Push element in left stack */
    push(LEFT_STACK, 2);
    push(LEFT_STACK, 4);
    push(LEFT_STACK, 6);
    /* Push element in right stack */
    push(RIGHT_STACK, 1);
    push(RIGHT_STACK, 3);
    push(RIGHT_STACK, 5);
    /*Pop Elements from left stack */
    printf("Pop from left stack %d\n", pop(LEFT_STACK));
    /*Pop Elements from right stack */
    printf("Pop from right stack %d\n", pop(RIGHT_STACK));
    return 0;
}