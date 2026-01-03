#include <stdio.h>
#include <stdlib.h>
#include "../header/__init__.h"


int main(){
    bstree bst;
    __init__(&bst);
    bst.insert(&bst,10);
    bst.insert(&bst,20);
    bst.insert(&bst,30);
    bst.insert(&bst,6);
    bst.traverse(&bst,0);
}