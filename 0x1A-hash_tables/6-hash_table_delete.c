#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *j, *k;

	if (!ht)
		return;
	while (i < ht->size)
	{
		j = ht->array[i];
		while (j)
		{
			k = j;
			free(k->key);
			free(k->value);
			j = j->next;
			free(k);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
