#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *right;
    struct node *left;
};

struct node *insert(struct node *, int);
void preorder(struct node *);

int main() {
    struct node *root = NULL;
    root = insert(root, 42);
    root = insert(root, 54);
    root = insert(root, 64);
    root = insert(root, 22);
    root = insert(root, 78);
    root = insert(root, 46);
    root = insert(root, 33);
    root = insert(root, 56);
    preorder(root);
    return 0;
}

struct node *insert(struct node *root, int value) {
    if (root == NULL) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    } else if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

void preorder(struct node *root) {
    if (root == NULL)
        return;
    printf("%d\n", root->data);
    preorder(root->left);
    preorder(root->right);
    return;
}
