#ifndef UTILS_H
#define UTILS_H

// Structure definition for the node
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

// Function prototypes
struct node * insertAtBeg(struct node *head);
struct node * insertAtEnd(struct node *tail);
void insertAtPos(struct node *head);
void display(struct node *head);
struct node * create(struct node *head);


#endif
