#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *head = NULL;

struct node *create(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void preOrder(struct node *head)
{
    if (head == NULL)
    {
        return;
    }

    printf("%d ", head->data);
    preOrder(head->left);
    preOrder(head->right);
}

void inOrder(struct node *head)
{
    if (head == NULL)
    {
        return;
    }

    inOrder(head->left);
    printf("%d ", head->data);
    inOrder(head->right);
}

void postOrder(struct node *head)
{
    if (head == NULL)
    {
        return;
    }

    postOrder(head->left);
    postOrder(head->right);
    printf("%d ", head->data);
}

void insert(struct node **head, int data)
{
    if (*head == NULL)
    {
        *head = create(data);
        return;
    }
    if ((*head)->data > data)
    {
        insert(&(*head)->left, data);
    }

    else if ((*head)->data < data)
    {
        insert(&(*head)->right, data);
    }

}

int main()
{
    int choice, data;
    while (1)
    {
        printf("\n\n");
        printf("1. Input data\n");
        printf("2. Traverse\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter data: ");
            scanf("%d", &data);
            insert(&head, data);
            break;
        case 2:
            if (head == NULL)
            {
                printf("\nNo Data Available\n");
                break;
            }
            printf("\nChoose traversal type:\n");
            printf("1. Pre-order\n");
            printf("2. In-order\n");
            printf("3. Post-order\n");
            printf("4. Exit\n");

            int choice;
            printf("\nEnter your choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("\n");
                preOrder(head);
                break;
            case 2:
                printf("\n");
                inOrder(head);
                break;
            case 3:
                printf("\n");
                postOrder(head);
                break;
            default:
                printf("Invalid choice\n");
                break;
            }
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
