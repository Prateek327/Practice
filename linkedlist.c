#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;};

void printList(struct node* k){
while(k!=NULL)
{
printf("%d",k->data);
k = k->link;}}

int main(){

struct node* head = (struct node*)malloc(sizeof(struct node));
struct node* second = (struct node*)malloc(sizeof(struct node));
struct node* third = (struct node*)malloc(sizeof(struct node));

head->data = 1;
head->link = second;

second->data = 4;
second->link = third;

third->data = 3;
third->link = NULL;

printList(head);

return 0;
}
