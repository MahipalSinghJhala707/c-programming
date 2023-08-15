#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
} node;

int i, len;
node *head = NULL;
node *next = NULL;
void enqueue();
void display();
void dequeue();

int main()
{
    int v;
    printf("Enter the size of queue you want ;");
    scanf("%d", &len);
    printf("What would you like to do now");
    printf("\n_____________________\n");
    while (1)
    {
        printf("\n_____________________\n");
        printf("\nEnter 1 to ENQUEUE\nEnter 2 to DEQUEUE\nEnter 3 to DISPLAY\nEnter 4 to DISPLAY FRONT\nEnter 5 to DISPLAY REAR\nEnter 0 to end");
        printf("\n___________________\n");
        scanf("%d", &v);

        switch (v)
        {
        case 0:
            return 0;
            break;
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            if (i != 0)
                printf("\n%d", head->data);
            else
                printf("EMPTY QUEUE T_T ");
            break;
        case 5:
            if (i != 0)
                printf("\n%d", next->data);
            else
                printf("EMPTY QUEUE T_T ");
            break;
        default:
            printf("\nEnter a valid input T_T \n");
            break;
        }
    }
}

void display()
{
    node *ptr = NULL;
    ptr = head;
    if (i == 0)
    {
        printf("EMPTY QUEUE T_T ");
    }
    else
    {
        printf("THE DATA OF QUEUE IS BELOW  :\n");
        for (int j = 0; j < i; j++)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->link;
        }
    }
}

void enqueue()
{
    if (i == len)
    {
        head = head->link;
        i--;
        enqueue();
    }
    else
    {
        node *new = NULL;
        new = (node *)malloc(sizeof(node));
        printf("\nEnter a number  :");
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

void dequeue()
{   
    if(i ==  0){
        printf("\n!!!!! UNDERFLOW !!!!!!");
        }
    else{
        head = head->link;
        i--;
        }

}
