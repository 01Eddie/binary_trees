#include "binary_trees.h"

/**
 * binary_trees_ancestor - Test ancestor function and print informations
 * @first: First node
 * @second: Second node
 * Return: NULL or binary_trees_ancestor(up_fi, up_se)
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *pa_fi, *pa_se;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	pa_fi = first->parent;
	pa_se = second->parent;

	if (first == pa_se || !pa_fi || (!pa_fi->parent && pa_se))
		return (binary_trees_ancestor(first, pa_se));
	else if (second == pa_fi || !pa_se || (!pa_se->parent && pa_fi))
		return (binary_trees_ancestor(second, pa_fi));

	return (binary_trees_ancestor(pa_fi, pa_se));
}
