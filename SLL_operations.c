#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert_beginning(struct node *head, int x);
struct node *insert_end(struct node *head, int x);
struct node *delete_beginning(struct node *head);
struct node *delete_end(struct node *head);
int SLL_search(struct node *head, int x);
int SLL_count(struct node *head);
void SLL_traversal(struct node *head);

int main()
{
    struct node *head = NULL;
    int x, ans, choice;

    while (1)
    {
        printf("\n1. Insert at beginning\n2. Insert at end\n3. Delete at beginning\n4. Delete at end\n5. Search a node\n6. Count nodes\n7. Display\n8. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter x: ");
            scanf("%d", &x);
            head = insert_beginning(head, x);
            break;
        case 2:
            printf("Enter x: ");
            scanf("%d", &x);
            head = insert_end(head, x);
            break;
        case 3:
            head = delete_beginning(head);
            break;
        case 4:
            head = delete_end(head);
            break;
        case 5:
            printf("Enter x: ");
            scanf("%d", &x);
            ans = SLL_search(head, x);
            if (ans)
            {
                printf("Node found..!!");
            }
            else
            {
                printf("Node not found..!!");
            }
            break;
        case 6:
            x = SLL_count(head);
            printf("Total number of nodes: %d\n", x);
            break;
        case 7:
            SLL_traversal(head);
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice..!!\n");
        }
    }
    return 0;
}

struct node *insert_beginning(struct node *head, int x)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed..!!\n");
        return head;
    }
    ptr->data = x;
    ptr->next = head;
    return ptr;
}

struct node *insert_end(struct node *head, int x)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed..!!\n");
        return head;
    }
    ptr->data = x;
    ptr->next = NULL;

    if (head == NULL)
    {
        return ptr;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        return head;
    }
}

struct node *delete_beginning(struct node *head)
{
    if (head == NULL)
    {
        printf("List is already empty..!!\n");
        return NULL;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct node *delete_end(struct node *head)
{
    if (head == NULL)
    {
        printf("List is already empty..!!\n");
        return NULL;
    }
    else if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        struct node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
        return head;
    }
}

int SLL_search(struct node *head, int x)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == x)
        {
            return 1;
        }
        ptr = ptr->next;
    }
    return 0;
}

int SLL_count(struct node *head)
{
    struct node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}

void SLL_traversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}