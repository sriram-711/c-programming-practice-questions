#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    int n, i;
    struct node *newnode, *temp, *head;

    head = NULL;

    printf("Enter size of linked list: ");
    scanf("%d", &n);

    for (i = 1; i <=n; i++) {
        newnode = malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &newnode->data);
        newnode->link = NULL;

        if (head == NULL) {
            head = newnode;
            temp = head;
        } else {
            temp->link = newnode;
            temp = newnode;
        }
    }

    /* Print linked list */
    temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");

    return 0;
}.    
