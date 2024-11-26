#ifndef NODE_H
#define NODE_H

#ifndef format_tree
#define format_tree "%s"
#endif // format_tree

typedef char* Node_t;

struct Node
{
    Node_t data;
    Node* left;
    Node* right;
};

#endif // NODE_H