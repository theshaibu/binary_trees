#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node.
 * @parent: Pointer to the node to insert the left child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the newly created node.
 *         NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    // Check if parent node exists
    if (!parent)
        return (NULL);

    // Allocate memory for the new node
    binary_tree_t *new = malloc(sizeof(binary_tree_t));
    // Check if memory allocation was successful
    if (!new)
        return (NULL);

    // Initialize the new node with the provided value
    new->n = value;
    // Set the parent of the new node
    new->parent = parent;
    // Initialize the right child of the new node to NULL
    new->right = NULL;
    // Set the left child of the new node to the existing left child of the parent
    new->left = parent->left;
    // Update the left child of the parent to point to the new node
    parent->left = new;
    // If the new node's left child is not NULL, update its parent pointer to the new node
    if (new->left)
        new->left->parent = new;

    // Return the newly created node
    return (new);
}

