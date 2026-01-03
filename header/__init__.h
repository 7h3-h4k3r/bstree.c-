#include "__struct__.h"
void __init__(bstree *bst);
void traverse(bstree *bst, int order);
void *xmalloc(size_t size);
int custErr(char *errMsg , const char *func ,const int line , const char *file , int isBreak);
int insert(bstree *bst,int value);