#ifndef NODE_H
#define NODE_H

#ifndef format_tree
#define format_tree "%d"
#endif // format_tree

typedef int Node_t;

struct Node
{
    Node_t data;
    Node* left;
    Node* right;
};

#endif // NODE_H