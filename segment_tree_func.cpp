#include <stdio.h>
#include <stdlib.h>
#include "segment_tree_func.h"

void TreeInsert(Node* node, Node_t val, Node* parent)
{
    if (node == nullptr)
    {
        printf("Error node ptr in TreeInsert\n");
        return;
    }

    while (node != nullptr)
    {
        parent = node;
        node = (val < node->data) ? node->left : node->right;
    }

    ((val < parent->data) ? parent->left : parent->right) = CreateNode(val);
}

Node* CreateNode(Node_t val)
{
    Node* n = (Node*) calloc(1, sizeof(Node));
    n->data = val;
    n->left = nullptr;
    n->right = nullptr;
    return n;
}

void TreePrint(Node* node)
{
    if (node == nullptr)
    {
        printf("Error node ptr in TreePrint\n");
        return;
    }

    printf("(");
    if (node->left) TreePrint(node->left);
    printf(" " format_tree " ", node->data);
    if (node->right) TreePrint(node->right);
    printf(")");
}