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


#endif
