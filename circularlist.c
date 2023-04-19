// Write a menu driven program of a circular linked list with functions : insertion at the
//beginning, deletion at the end, insertion between two nodes, deletion of first node, deletion of last node,deletion of a node whose position is given, deletion of any node anddisplay.
#include <stdio.h>
#include <stdlib.h> 
struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
struct node *last = NULL;
int node_count()
{
    struct node *temp = start;
    int count = 1;
    while (temp->next != start)
    {
        count++;
        89 temp = temp->next;
    }
    return count;
}
void display_circular_linklist()
{
    struct node *temp = start;
    while (temp->next != start)
    {
        printf("%d\n", temp->info);
        temp = temp->next;
    }
    printf("%d\n", temp->info);
}
void insertion_at_beg(int item)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    if (newnode == NULL)
    {
        printf("overflow");
        exit(0);
    }
    else
        90
        {
            if (start == NULL)
            {
                start = last = newnode;
                start->next = start;
                newnode->info = item;
            }
            else
            {
                newnode->next = start;
                start = newnode;
                last->next = start; // start or newnode
                newnode->info = item;
            }
        }
}
void insertion_at_end(int item)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    if (newnode == NULL)
    {
        printf("overflow");
        exit(0);
    }
    else
        
        {
            if (start == NULL)
            {
                start = last = newnode;
                start->next = start;
                newnode->info = item;
            }
            else
            {
                last->next = newnode;
                last = newnode;
                last->next = start;
                newnode->info = item;
            }
        }
}
void insertion_after_at_specific(int pos, int item)
{
    int val = item;
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    if (newnode == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
        92
        {
            int count = node_count();
            if (pos >= 1 || pos <= count + 1)
            {
                if (pos == 1)
                    insertion_at_beg(item);
                else if (pos == count + 1)
                    insertion_at_end(item);
                else
                {
                    struct node *temp = start;
                    int i = 1;
                    while (i < pos)
                    {
                        temp = temp->next;
                        i++;
                    }
                    newnode->next = temp->next;
                    temp->next = newnode;
                    newnode->info = item;
                }
            }
            else
                printf("insertion not possible");
        }
}

93 void deletion_at_beg()
{
    int item;
    if (start == NULL)
    {
        printf("underflow");
        exit(0);
    }
    else
    {
        struct node *temp = start;
        if (start == last)
        {
            start = last = NULL;
            temp->next = NULL;
            item = temp->info;
            free(temp);
            printf("single Node Deleted");
        }
        else
        {
            start = start->next;
            last->next = start;
            temp->next = NULL;
            item = temp->info;
            free(temp);
            printf("Node Deleted");
        }
    }
}
void deletion_at_end()
{
    int item;
    if (start == NULL)
    {
        printf("underflow");
        exit(0);
    }
    else
    {
        struct node *temp = start;
        if (start == last)
        {
            start = last = NULL;
            temp->next = NULL;
            item = temp->info;
            free(temp);
        }
        else
            95
            {
                while (temp->next != last)
                {
                    temp = temp->next;
                }
                last = temp;
                temp = temp->next;
                last->next = start;
                temp->next = NULL;
                item = temp->info;
                free(temp);
            }
    }
}
void deletion_at_specific(int
                              pos)
{
    if (start == NULL)
    {
        printf("underflow");
        exit(0);
    }
    else
    {
        int count = node_count();
        if (pos >= 1 || pos <= count + 1)
            96
            {
                if (pos == 1)
                    deletion_at_beg();
                else if (pos == count + 1)
                    deletion_at_end();
                else
                {
                    struct node *temp = start;
                    struct node *Q;
                    int i = 1;
                    while (i < pos)
                    {
                        Q = temp;
                        temp = temp->next;
                        i++;
                    }
                    Q->next = temp->next;
                    temp->next = NULL;
                    int item = temp->info;
                    free(temp);
                }
            }
    }
}
void main()
{
    int choice, item, pos;
    97 while (1)
    {
        printf("\n1.insertion At beg\n2.insertion at end\n3.insertion at specific\n4.deletion at beg");
        printf("\n5.deletion at end\n6.deletion at specific\n7.display linklist\n 8.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the item\n");
            scanf("%d", &item);
            insertion_at_beg(item);
            break;
        case 2:
            printf("\nEnter the item\n");
            scanf("%d", &item);
            insertion_at_end(item);
            break;
        case 3:
            printf("\nEnter the item and position\n");
            scanf("%d%d", &item, &pos);
            insertion_after_at_specific(pos, item);
            break;
        case 4:
            deletion_at_beg();
            break;

        case 5:
             deletion_at_end();
            break;
        case 6:
            printf("enter the position");
            scanf("%d", &pos);
            deletion_at_specific(pos);
            break;
        case 7:
            display_circular_linklist();
            break;

        case 8:
            exit(0);
        default:
            printf("\nPlease enter valid choice\n");
        }
    }
}
