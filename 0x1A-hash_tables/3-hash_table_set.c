#include "hash_tables.h"

/**
 * add_node - adds a new node at the beginning of a hash_node_t list.
 * @head: pointer to head of the linked list
 * @key: Hash node key
 * @value: Hash node value
 * Return: the address of the new element, or NULL if it failed
 */

hash_node_t *add_node(hash_node_t **head, char *key, const char *value)
{
	char *copy_value, *copy_key;
	hash_node_t *ret, *actual_node;

	actual_node = *head;
	while (actual_node)
	{
		if (actual_node->key && strcmp((actual_node->key), key) == 0)
		{
			if (actual_node->value)
				free(actual_node->value);
			(actual_node->value) = strdup(value);
			return (actual_node);
		}
		actual_node = actual_node->next;
	}
	ret = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (ret == NULL)
		return (NULL);
	copy_value = strdup(value);
	if (copy_value == NULL)
	{
		free(ret);
		return (NULL);
	}
	copy_key = strdup(key);
	if (copy_key == NULL)
	{
		free(copy_value);
		free(ret);
		return (NULL);
	}
	ret->key = copy_key;
	ret->value = copy_value;
	ret->next = *head;
	*head = ret;
	return (ret);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: Hash table to add or update
 * @key: Key to add. Cannot be an empty string
 * @value: Value associated to key. Can be empty string
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *added;

	if (ht && key && *key)
	{
		idx = key_index((const unsigned char *)key, ht->size);
		added = add_node(&((ht->array)[idx]), (char *)key, value);
		if (!added)
			return (0);
		return (1);
	}
	return (0);
}
