#include <stdio.h>
#include <stdlib.h>

// Structure of the tree
struct node
{
    int data;
    struct node *left, *right;
};

// Declaration of the function
struct node *create();
void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);

// Entry point
int main()
{
    struct node *root;

    system("clear");

    root = create();
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");

    return 0;
}

// Using Recursion
struct node *create()
{
    int x;
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);
    if (x == -1)
        return 0;
    newnode->data = x;

    printf("Enter data for left child node of %d\n", x);
    printf("=====================================\n");
    newnode->left = create();

    printf("Enter data for right child node of %d\n", x);
    printf("=====================================\n");
    newnode->right = create();

    return newnode;
}

// Formula used: Root Left Right
void preorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    printf("%d\t", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Formula used: Left Root Right
void inorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    inorder(root->left);
    printf("%d\t", root->data);
    inorder(root->right);
}

// Formual used: Left Right Root
void postorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\t", root->data);
}
