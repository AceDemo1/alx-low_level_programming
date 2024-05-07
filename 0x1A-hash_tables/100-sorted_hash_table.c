#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *i;

	if (size <= 0)
		return (NULL);
	i = malloc(sizeof(shash_table_t));
	if (!i)
		return (NULL);
	i->size = size;
	i->array = malloc((sizeof(shash_node_t *) * size));
	if (!(i->array))
	{
		free(i);
		return (NULL);
	}
	i->shead = NULL;
	i->stail = NULL;
	return (i);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (!ht || !key || !value)
		return (NULL);
	i = 
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{

}

void shash_table_print(const shash_table_t *ht)
{

}

void shash_table_print_rev(const shash_table_t *ht)
{

}

void shash_table_delete(shash_table_t *ht)
{

}
