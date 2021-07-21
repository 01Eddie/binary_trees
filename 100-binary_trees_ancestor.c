#include "binary_trees.h"
#define BT binary_tree_t

/**
 * binary_trees_ancestor - Test ancestor function and print informations
 *
 * @first: First node
 * @second: Second node
 * Return: NULL or binary_trees_ancestor(up_fi, up_se)
 */
BT *binary_trees_ancestor(const BT *first, const BT *second)
{
	binary_tree_t *up_fi, *up_se;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	up_fi = first->parent;
	up_se = second->parent;

	if (first == up_se || !up_fi || (!up_fi->parent && up_se))
		return (binary_trees_ancestor(first, up_se));
	else if (second == up_fi || !up_se || (!up_fi->parent && up_fi))
		return (binary_trees_ancestor(second, up_fi));

	return (binary_trees_ancestor(up_fi, up_se));
}
