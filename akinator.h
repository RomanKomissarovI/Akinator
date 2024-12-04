#ifndef AKINATOR_H
#define AKINATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "node.h"
#include "binary_tree_func.h"

void Akinator(Node* questions, Node* parent);

int Strcmp(char* s1, const char* s2);

void GetLine(char* s);

#endif // AKINATOR_H