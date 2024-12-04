#include "akinator.h"

const int Max_Size_Question = 100;

void Akinator(Node* questions, Node* parent)
{
    printf("Your character %s?\n", questions->data);
    char s[Max_Size_Question + 1];
    GetLine(s);
    if (Strcmp(s, "yes") == 0)
    {
        if (questions->left) Akinator(questions->left, questions);
        else
        {
            printf("Ura\n");
        }
    }
    else if (Strcmp(s, "no") == 0)
    {
        if (questions->right) Akinator(questions->right, questions);
        else
        {
            printf("What is distinguishing feature of your character?\n");
            GetLine(s);
            questions->right = CreateNode(s);

            printf("Who did you guess?\n");
            GetLine(s);
            questions->right->left = CreateNode(s);

            if (questions->left == nullptr)
            {
                questions->right->right = CreateNode(questions->data);
                if (parent->left == questions)
                {
                    parent->left = questions->right;
                }
                else
                {
                    parent->right = questions->right;
                }
                free(questions);
            }
        }
    }
    else
    {
        printf("You can only write 'yes' or 'no'\n");
        Akinator(questions, parent);
    }
}

int Strcmp(char* s1, const char* s2)
{
    while ((*s1 != '\0') && (tolower(*s1) == tolower(*s2)))
    {
        s1++;
        s2++;
    }
    return tolower(*s1) - tolower(*s2);
}

void GetLine(char* s)
{
    int i = 0;
    int c = 0;
    while (i < Max_Size_Question && (c = getchar()) != '\n')
    {
        s[i] = (char) c;
        i++;
    }
    s[i] = '\0';
}