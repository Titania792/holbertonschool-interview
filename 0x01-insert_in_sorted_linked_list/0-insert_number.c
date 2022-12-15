#include "lists.h"
#include <stdlib.h>


/**
* insert_node - function that inserts a number into a
* sorted singly linked list
* @head: first node
* @number: number to be inserted
* Return: a pointer with the addres of the new node or NULL if it failed
*/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *aux;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !number)
		return (NULL);
	new_node->n = number;
	new_node->next = NULL;
	aux = *head;

	if (!head)
	{
		*head = new_node;
		return new_node;
	}

	if (aux->n > number)
	{
		new_node->next = aux;
		*head  = new_node;
		return (new_node);
	}
	
	while (aux->next->n < number)
	{
		aux = aux->next;
		if (aux->next == NULL)
		{
			aux->next = new_node;
			return (new_node);
		}
	}	

	new_node->next = aux->next;
	aux->next = new_node;

	return (new_node);
}
