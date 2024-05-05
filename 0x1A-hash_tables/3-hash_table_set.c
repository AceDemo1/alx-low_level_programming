#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *i, *j;
	int in;

	if (!ht || !key || !value)
		return (0);
	in = key_index((unsigned char *)key, ht->size);
	j = ht->array[in];
	while (j)
	{
		if (strcmp(j->key, key) == 0)
		{
			j->value = strdup(value);
			if (!(j->value))
				return (0);
			return (1);
		}
		j = j->next;
	}
	i = malloc(sizeof(hash_node_t));
	if (!i)
		return (0);
	i->key = strdup(key);
	if (!(i->key))
		return (0);
	i->value = strdup(value);
	if (!(i->value))
	{
		free(i->key);
		free(i);
		return (0);
	}
	i->next = ht->array[in];
	ht->array[in] = i;
	return (1);
}
