#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Hash table's size
 * Return: Pointer to created hash table, or NULL if something wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ret;
	hash_node_t **ret_array;

	ret = calloc(1, sizeof(*ret));
	if (!ret)
		return (NULL);

	ret_array = calloc(size, sizeof(*ret_array));
	if (!ret_array)
	{
		free(ret);
		return (NULL);
	}
	ret->size = size;
	ret->array = ret_array;
	return (ret);
}
