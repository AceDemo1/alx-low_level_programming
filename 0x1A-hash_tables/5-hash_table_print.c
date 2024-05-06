#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_table_t *i = ht;
	unsigned long int k = 0;
	hash_node_t *j;

	if (!i)
		return;
	printf("{");
	while (k < i->size)
	{
		j = i->array[k];
		while (j)
		{
			printf("'%s': '%s'%s", j->key, j->value, (k != i->size - 1 || j->next) ? "," : "");
			j = j->next;
		}
		k++;
	}
	printf("}\n");
}
