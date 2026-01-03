#include<stdio.h>
#include<stdlib.h>
#include "../header/__init__.h"

Node *setNode(int data){
    Node *new_node = xmalloc(sizeof(Node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

Node *getNode(Node *root,int value){
    if (!root){
        return root;
    }

    if (root->data > value ){
        if (!root->left){
            root->left = setNode(value);
            return 0;
        }
        else{
            getNode(root->left,value);
        }
    }
    else{
        if (!root->right){
            root->right = setNode(value);
            return 0;
        }
        else{
            getNode(root->right,value);
        }
    }
}

int _inOrder(Node *root){
    if (!root){
        return -1;
    }
    _inOrder(root->left);
    printf("%d ",root->data);
    _inOrder(root->right);
}

int _preOrder(Node *root){
    if (!root){
        return -1;
    }
    printf("%d ",root->data);
    _preOrder(root->left);
    _preOrder(root->right);
}


int _postOrder(Node *root){
    if (!root){
        return -1;
    }
    _postOrder(root->left);
    _postOrder(root->right);
    printf("%d ",root->data);
}


void _traverse(bstree *bst,int order){
    if (order == 1){
        _inOrder(bst->root);
    }else if(order == 2){
        _postOrder(bst->root);
    }
    else{
        _preOrder(bst->root);
    }
}
int _insert(bstree *bst , int value){
    if (!bst->root){
        bst->root = setNode(value);
        return 0;
    }

    getNode(bst->root,value);

}

void __init__(bstree *bst){
    bst->root = xmalloc(sizeof(Node));
    bst->root = NULL;
    bst->insert = _insert;
    bst->traverse = _traverse;
}