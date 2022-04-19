// some application of binary tree
// in a binary tree in the right of left most tree we have to insert the numbers
// which are not greator then the head 
// while in the left of right most tree we have to insert the numbers which
// are greator then the head

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

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
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

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data < prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    return 1;
}

struct node *search(struct node *root, int val)
{
    if (root == NULL)
    {
        /* code */
        return NULL;
    }
    else if (root->data == val)
    {
        return root;
    }
    else if (root->data > val)
    {
        return search(root->left, val);
    }
    else if (root->data < val)
    {
        return search(root->right, val);
    }
}

struct node *searchitravtive(struct node *root, int val)
{
    while (root != NULL)
    {
        if (val == root->data)
        {
            return root;
        }
        else if (val < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

void insertion(struct node *root, int val)
{
    struct node *prev;
    while (root != NULL)
    {
        prev = root;
        if (root->data == val)
        {
            printf("%d already exists in BST\n", val);
            return;
        }
        else if (val > root->data)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    struct node *n = createnode(val);
    if (val > prev->data)
    {
        prev->right = n;
    }
    else
    {
        prev->left = n;
    }
}

int main()
{
    /*
    this is the binary tree.
                4
              /  \
            2     6
           /\
          1  3
    */
    struct node *p = createnode(4);
    struct node *p1 = createnode(2);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(3);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    // preorder(p);
    // printf("\n");
    // postorder(p);
    // printf("\n");
    // inorder(p);
    // printf("\n");
    // printf("%d", isBST(p));
    // struct node *n = searchitravtive(p, 6);
    // if (n != NULL)
    // {
    //     printf("\nelement found");
    // }
    // else
    // {
    //     printf("\nelement not found");
    // }
    insertion(p, 6);
    printf("%d", p2->right->data);
    return 0;
}