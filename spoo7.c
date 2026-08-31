#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
struct node *next;
};

int main() {
    struct node *head=NULL, *newNode, *temp;
    int n, i;

    printf("enter the number of nodes:");
    scanf("%d",&n);

    for(i=0; i<n; i++) {
        newNode = malloc(sizeof(struct node));
    
        printf("enter data: ");
        scanf("%d",&newNode->data);

        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else
            temp->next = newNode;

        temp = newNode;
     }
     
     printf("List created succesfully.");

     return 0;
}
