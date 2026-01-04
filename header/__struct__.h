typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}Node;

typedef struct bstree
{
    Node *root;
    int (*insert)(struct bstree *,int value);
    void (*traverse)(struct bstree *,int order);
    int (*delete) (struct bstree  *,int key);
    /* data */
}bstree;


