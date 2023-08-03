#ifndef UTILS_H
#define UTILS_H

// Structure definition for the node
struct node
{
	int data;
	struct node *next;
};

// Function prototype for create_node.c
struct node * create(struct node *head);
// Function prototype for print_node.c
void print_node(struct node *head);

#endif
