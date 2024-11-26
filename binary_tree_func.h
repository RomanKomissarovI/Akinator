#ifndef BINARY_TREE_FUNC_H
#define BINARY_TREE_FUNC_H

#include "node.h"

void TreeInsert(Node* node, Node_t val, Node* parent);

Node* CreateNode(Node_t val);

void TreePrint(Node* node);

#endif // BINARY_TREE_FUNC_H