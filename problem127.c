#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int item;
    struct queue *link;
};
struct queue *rear, *front;
void add(int item);
int del_queue();
int main()
{
    int item;
    rear = front = NULL;
    add(10);
    add(20);
    add(30);
    add(40);
    add(50);
    add(60);
    item = del_queue();
    printf("Deleted item = %d\n", item);
    item = del_queue();
    printf("Deleted item = %d\n", item);
    return 0;
}
void add(int item)
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue)); // dynamic memory allocation of structs
                                                                    // Reference :- https://www.programiz.com/c-programming/c-structures-pointers
    q->item = item;

    q->link = NULL;
    if (rear == NULL)
    {
        rear = q;
        front = q;
    }
    else
    {
        q->link = rear;
        rear = q;
    }
    printf("item %u\n", &(q->item));
    printf("item val %d\n", q->item);
    printf("link %u\n", &(q->link));
    printf("link val %d\n", q->link);
}
int del_queue()
{
    int item;
    struct queue *q = rear;
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return 1;
    }
    else
    {
        if (front == rear)
        {
            item = q->item;
            front = rear = NULL;
            free(q);
        }
        else
        {
            while (q->link->link != NULL)
            {
                printf("%d\n", q->link);
                q = q->link;
                printf("Value of q inside the while loop %d\n", q);
            }
            item = q->link->item;
            printf("Value of q->link = %d\n", q->link);
            free(q->link);
            printf("Value of q %d\n", q);
            front = q;
            q->link = NULL;
        }
    }
    return item;
}