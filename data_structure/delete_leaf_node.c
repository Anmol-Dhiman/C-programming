// this code is for deleting the node in tree
// if we want to delete any node then we have to delete the copy the inorder
// preprocessor in that node and then we have to delet that preprocessor node
// ,which is a leaf node
#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
struct node *inorderpreprocessor(struct node *root)
{
    // this function will find the
    // inorder preprocessor of the root which we have to copy on that node
    // which we want to delete
    // and after that we have to delete that leaf node

    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deletenode(struct node *root, int value)

{
    struct node *p;
    if (root == NULL)
    {
        // if the starting node is null the this condition works only
        // otherwise it has no use
        return NULL;
    }
    if (root->right == NULL && root->left == NULL)
    {
        // find the leaf node and free the dynamic memory/
        free(root);
        return NULL;
    }
    //  here we start to reach that node which we want to delete
    if (value < root->data)
    {
        root->left = deletenode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deletenode(root->right, value);
    }
    // upto here we have reached that node
    else
    {
        // now we will find the corresponding inorder preprocessor
        p = inorderpreprocessor(root);
        // copy the data of inorder preprocessor into the node which we want to delete
        root->data = p->data;
        // now we will delete that leaf node
        root->left = deletenode(root->left, p->data);
    }
    // this will return the head of the tree
    return root;
}

int main()
{
    // it is BST
    struct node *p = createnode(4);
    struct node *p1 = createnode(2);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(3);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    inorder(p);
    printf("\n");
    // printf("%d\n",p->data);

    deletenode(p, 1);
    inorder(p);
    return 0;
}