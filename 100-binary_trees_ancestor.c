#include "binary_trees.h"
#define BT binary_tree_t

/**
 * binary_trees_ancestor - Test ancestor function and print informations
 *
 * @first: First node
 * @second: Second node
 * Return: NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *up_fi, *up_se;

	if (!first || !second) // (!parent)
		return (NULL);

	if (first == second) //(parent == first || parent == second)
		return ((binary_tree_t*)first);// (parent);

	up_fi = first->parent;
	up_se = second->parent;

	if (first==up_se || !up_fi || (!up_fi->parent && up_se)) // (left && right)
		return (binary_trees_ancestor(first, up_se));//return (parent);
	else if (second==up_fi || !up_se || (!up_fi->parent && up_se)) //if (!left && !right)
		return (binary_trees_ancestor(second, up_fi)); // return (NULL);

	return (binary_trees_ancestor(up_fi, up_se)); //return (left != NULL ? left : right);
}
