#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
} node;

int i;
node *head = NULL;
node *next = NULL;

void push();
void pop();
void display();
void peek();
int z;

int main()
{
    int v;
    printf("Enter the size of stack you want ;");
    scanf("%d", &z);
    printf("What would you like to do now");
    printf("\n_____________________\n");
    while (1)
    {
        printf("\n_____________________\n");
        printf("\nEnter 1 to push\nEnter 2 to pop\nEnter 3 to display\nEnter 4 to peek\nEnter 0 to end");
        printf("\n___________________\n");
        scanf("%d", &v);

        switch (v)
        {
        case 0:
            return 0;
            break;
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        default:
            printf("\nEnter a valid input T_T \n");
            break;
        }
    }
}

void push()
{
    if (i == z)
    {
        printf("!!!!!!OVERFLOW!!!!!!");
    }
    else
    {
        node *new = NULL;
        new = (node *)malloc(sizeof(node));
        printf("\nEnter a number  ;");
        scanf("%d", &new->data);
        if (i == 0)
        {
            head = new;
        }
        else
        {
            next->link = new;
        }
        next = new;
        i++;
    }
}

void pop()
{
    node *temp = NULL;
    temp = head;
    if (i == 0)
    {
        printf("\n!!!!!!UNDERFLOW!!!!!!\n");
    }
    else if (i == 1)
    {
        free(head);
        head = NULL;
        i--;
    }
    else
    {
        int x = i;
        while (x > 1)
        {
            temp = temp->link;
            x--;
        }
        free(temp);
        temp = NULL;
        i--;
    }
}

void peek()
{
    node *temp = NULL;
    temp = head;
    if (head == NULL)
    {
        printf("Stack is empty T_T ");
    }
    else
    {
        for (int j = i; j > 1; j--)
        {
            temp = temp->link;
        }
        printf("The no. at the top is : %d", temp->data);
    }
}

void display()
{
    if (head == NULL)
    {
        printf("EMPTY STACK T_T ");
    }
    else
    {
        printf("THE DATA OF stack is BELOW  :\n");
        node *temp = NULL;
        for (int j = i; j > 0; j--)
        {
            temp = head;
            for (int k = j; k > 1; k--)
            {
                temp = temp->link;
            }
            printf("\n|%d|", temp->data);
        }
    }
}
