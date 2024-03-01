#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node for a binary tree.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 *
 * Returns: Pointer to the newly created node.
 *          NULL if memory allocation fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    // Allocate memory for the new node
    binary_tree_t *new = malloc(sizeof(binary_tree_t));
    
    // Check if memory allocation was successful
    if (!new)
        return (NULL);
    
    // Initialize the node with the provided value
    new->n = value;
    // Set the parent node
    new->parent = parent;
    // Initialize the left and right child nodes to NULL
    new->left = NULL;
    new->right = NULL;
    
    // Return the newly created node
    return (new);
}

