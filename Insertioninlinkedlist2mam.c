#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} list;
void LinkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    int item, ch = 1;
    list *start = NULL, *ptr, *temp;
    while (ch == 1)
    {
        printf("\nEnter data: ");
        scanf("%d", &item);
        temp = (list *)malloc(sizeof(list));
        temp->data = item;
        temp->next = NULL;

        if (start == NULL)
        {
            start = temp;
            ptr = temp;
        }
        else
        {
            ptr->next = temp;
            ptr = temp;
        }
        printf("\nEnter 1 if you want to Re-Enter: ");
        scanf("%d", &ch);
    }
    printf("--------------------------");
    LinkedListTraversal(start);
    return 0;
}