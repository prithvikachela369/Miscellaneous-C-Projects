#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void push(struct node **s, int item);
int pop(struct node **s);
int main()
{
    struct node *top;
    int t, i, item;
    top = NULL;
    push(&top, 45);
    printf("%d\n", top->data);
    push(&top, 28);
    printf("%d\n", top->data);
    push(&top, 63);
    printf("%d\n", top->data);
    push(&top, 55);
    printf("%d\n", top->data);
    item = pop(&top);
    printf("Popped:%d\n", item);
    item = pop(&top);
    printf("Popped:%d\n", item);
    return 0;
}
void push(struct node **s, int item)
{
    struct node *q;
    q = (struct node *)malloc(sizeof(struct node));
    q->data = item;
    q->link = *s;
    *s = q;
}
int pop(struct node **s)
{
    int item;
    struct node *q;
    if (*s == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        q = *s;
        item = q->data;
        *s = q->link;
        free(q); // deallocates the memory previously allocated by malloc()
        return item;
    }
}