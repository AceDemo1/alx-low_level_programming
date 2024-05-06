#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int k = 0;
	hash_node_t *j;

	if (!ht)
		return;
	printf("{");
	while (k < ht->size)
	{
		j = ht->array[k];
		while (j)
		{
			printf("'%s': '%s'%s", j->key, j->value, \
					(k != ht->size - 1 || j->next != NULL) ? ", " : "");
			j = j->next;
		}
		k++;
	}
	printf("}\n");
}
