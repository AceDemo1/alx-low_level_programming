#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table to look into
 * @key: is the key
 * Return: the value associated with the element,
 * or NULL is key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *k;

	if (!key || !ht)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	k = ht->array[i];
	while (k)
	{
		if (strcmp(k->key, key) == 0)
			return (k->value);
		k = k->next;
	}
	return (NULL);
}         
