#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert_bst(int x, struct node *root);
void inorder_traversal(struct node *root);
void preorder_traversal(struct node *root);
void postorder_traversal(struct node *root);
struct node *search_bst(int x, struct node *root);

int main()
{
    struct node *root = NULL; // Initialize root to NULL
    struct node *result;
    int choice, x;

    while (1)
    {
        printf("\n1. Insert\n2. Display Inorder\n3. Display Preorder\n4. Display Postorder\n5. Search\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter x: ");
            scanf("%d", &x);
            root = insert_bst(x, root);
            break;
        case 2:
            inorder_traversal(root);
            break;
        case 3:
            preorder_traversal(root);
            break;
        case 4:
            postorder_traversal(root);
            break;
        case 5:
            printf("Enter x: ");
            scanf("%d", &x);
            result = search_bst(x, root);
            if (result == NULL)
            {
                printf("%d is not found in the BST.\n", x);
            }
            else
            {
                printf("%d is found in the BST.\n", x);
            }
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice..!!\n");
        }
    }
    return 0;
}

struct node *insert_bst(int x, struct node *root)
{
    if (root == NULL)
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = x;
        ptr->left = NULL;
        ptr->right = NULL;
        return ptr;
    }
    if (root->data < x)
    {
        root->right = insert_bst(x, root->right);
    }
    else
    {
        root->left = insert_bst(x, root->left);
    }
    return root;
}

void inorder_traversal(struct node *root)
{
    if (root != NULL)
    {
        inorder_traversal(root->left);
        printf("%d ", root->data);
        inorder_traversal(root->right);
    }
}

void preorder_traversal(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

void postorder_traversal(struct node *root)
{
    if (root != NULL)
    {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        printf("%d ", root->data);
    }
}

struct node *search_bst(int x, struct node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == x)
    {
        return root;
    }
    if (root->data < x)
    {
        return search_bst(x, root->right);
    }
    else
    {
        return search_bst(x, root->left);
    }
}
