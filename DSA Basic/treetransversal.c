#include <stdio.h>

#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *tree;
void create(struct node *);
struct node *insertelement(struct node *, int);
void inordertraversal(struct node *);
void preordertraversal(struct node *);
void postordertraversal(struct node *);
int main()
{
    int option, val;
    struct node *ptr;
    create(tree);
    
    do
    {
        printf("\n1.insert\n2.inorder\n3.preorder\n4.postorder\n5.exit");
        printf("\nEnter choice");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\n Enter the values of the new node :");
            scanf("%d", &val);
            tree = insertelement(tree, val);
            break;
        case 2:
            printf("\n Inorder traversals : \n");
            inordertraversal(tree);
            break;
        case 3:
            printf("\n Preorder traversals : \n");
            preordertraversal(tree);
            break;
        case 4:
            printf("\n Postorder traversals : \n");
            postordertraversal(tree);
            break;
        }
    } while (option != 5);
    
    return 0;
}
void create(struct node *tree)
{
    tree = NULL;
}
struct node *insertelement(struct node *tree, int val)
{
    struct node *ptr, *nodeptr, *parentptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->left = NULL;
    ptr->right = NULL;
    if (tree == NULL)
    {
        tree = ptr;
        tree->left = NULL;
        tree->right = NULL;
    }
    else
    {
        parentptr = NULL;
        nodeptr = tree;
        while (nodeptr != NULL)
        {
            parentptr = nodeptr;
            if (val < nodeptr->data)
                nodeptr = nodeptr->left;
            else
                nodeptr = nodeptr->right;
        }
        if (val < parentptr->data)
            parentptr->left = ptr;
        else
            parentptr->right = ptr;
    }
    return tree;
}
void inordertraversal(struct node *tree)
{
    if (tree != NULL)
    {
        inordertraversal(tree->left);
        printf("%d\t", tree->data);
        inordertraversal(tree->right);
    }
}
void preordertraversal(struct node *tree)
{
    if (tree != NULL)
    {
        printf("%d\t", tree->data);
        preordertraversal(tree->left);
        preordertraversal(tree->right);
    }
}
void postordertraversal(struct node *tree)
{
    if (tree != NULL)
    {
        postordertraversal(tree->left);
        postordertraversal(tree->right);
        printf("%d\t", tree->data);
    }
}