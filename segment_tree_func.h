#ifndef SEGMENT_TREE_FUNC_H
#define SEGMENT_TREE_FUNC_H

#include "node.h"

void TreeInsert(Node* node, Node_t val, Node* parent);

Node* CreateNode(Node_t val);

void TreePrint(Node* node);

#endif // SEGMENT_TREE_FUNC_H