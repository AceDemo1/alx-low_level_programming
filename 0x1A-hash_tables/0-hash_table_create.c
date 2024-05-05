#include "hash_tables.h"
/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	if (size)
	{
		ht->size = size;
		ht->array = malloc(sizeof(hash_node_t *) * size);
		if (!(ht->array))
		{
			free(ht);
			return (NULL);
		}
		return (ht);
	}
	return (NULL);
}
