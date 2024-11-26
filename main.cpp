#include <stdio.h>
#include <string.h>
#include "binary_tree_func.h"
#include "in_out.h"

int main()
{  
    FILE* data_file = fopen("output.txt", "r");

    Node* a = TreeFileInput(data_file);
    // Node* a = CreateNode("h");
    // TreeInsert(a, "c");
    // TreeInsert(a, "a");
    // TreeInsert(a, "d");
    // TreeInsert(a, "j");
    // TreeInsert(a, "k");
    // TreeInsert(a, "i");
    
    TreePrint(a);
    //TreeFileOut(data_file, a, 0);

    fclose(data_file);
    return 0;
}