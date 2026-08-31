#include<stdio.h>
struct node
{
int data;
struct node*next;
};
int main(){
struct node *head, *temp;

head = NULL;


struct node n1 = {10, NULL};
struct node n2 = {20, NULL};
struct node n3 = {30, NULL};

head = &n1;
n1.next = &n2;
n2.next = &n3;

temp = head;

while(temp != NULL) {
printf("%d -> ", temp-> data);
temp = temp->next;
}

printf("NULL");

return 0;
}

