#include <stdio.h>
#include <string.h>
#include "binary_tree_func.h"
#include "in_out.h"
#include "akinator.h"

int main()
{  
    FILE* data_file = fopen("output.txt", "r");

    Node* a = TreeFileInput(data_file);
    //TreePrint(a);
    //printf("\n\n");

    fclose(data_file);
    //data_file = fopen("output.txt", "w");

    //TreeFileOut(data_file, a, 0);
    //fclose(data_file);

    Akinator(a, nullptr);

    data_file = fopen("output.txt", "w");
    //TreePrint(a);
    //printf("\n\n");
    TreeFileOut(data_file, a, 0);

    fclose(data_file);
    return 0;
}

// Learn on MIPT
// 1 1
// Ded
// 0 0
// Putin
// 0 0
