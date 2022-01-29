#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table. Format: {key:value}
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0, printed = 0;
	hash_node_t *actual_node;

	if (ht && ht->array)
	{
		printf("{");
		while (idx < ht->size)
		{
			actual_node = (ht->array)[idx];
			while (actual_node)
			{
				if (printed > 0)
					printf(", ");
				printf("'%s': '%s'", actual_node->key, actual_node->value);
				printed++;
				actual_node = actual_node->next;
			}
			idx++;
		}
		printf("}\n");
	}
}
