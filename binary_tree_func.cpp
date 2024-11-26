#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "binary_tree_func.h"

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
        node = (strcmp(val, node->data) < 0) ? node->left : node->right;
    }

    ((strcmp(val, parent->data) < 0) ? parent->left : parent->right) = CreateNode(val);
}

Node* CreateNode(Node_t val)
{
    Node* n = (Node*) calloc(1, sizeof(Node));
    n->data = (char*) calloc(strlen(val), sizeof(char));
    strcpy(n->data, val);
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