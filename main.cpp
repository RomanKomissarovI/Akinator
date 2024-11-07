#include <stdio.h>
#include "segment_tree_func.h"

int main()
{
    Node* a = CreateNode(10);
    TreeInsert(a, 12, nullptr);
    TreeInsert(a, 8, nullptr);
    TreeInsert(a, 6, nullptr);
    TreeInsert(a, 9, nullptr);
    TreeInsert(a, 5, nullptr);
    TreePrint(a);
    return 0;
}