#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node node;
node *root = NULL;

// Create BST nodes
void create() {
    int x, ch;
    node *t, *temp, *parent;
    do {
        t = (node*)malloc(sizeof(node));
        t->lchild = t->rchild = NULL;
        printf("Enter data: ");
        scanf("%d", &x);
        t->data = x;

        if (root == NULL) {
            root = t;
        } else {
            temp = root;
            while (temp != NULL) {
                parent = temp;
                if (x < temp->data)
                    temp = temp->lchild;
                else
                    temp = temp->rchild;
            }
            if (x < parent->data)
                parent->lchild = t;
            else
                parent->rchild = t;
        }

        printf("To create another node, press 1 (or 0 to stop): ");
        scanf("%d", &ch);
    } while (ch != 0);
}

// Traversals
void preorder(node *t) {
    if (t != NULL) {
        printf("%d ", t->data);
        preorder(t->lchild);
        preorder(t->rchild);
    }
}

void inorder(node *t) {
    if (t != NULL) {
        inorder(t->lchild);
        printf("%d ", t->data);
        inorder(t->rchild);
    }
}

void postorder(node *t) {
    if (t != NULL) {
        postorder(t->lchild);
        postorder(t->rchild);
        printf("%d ", t->data);
    }
}

void traversal() {
    int ch;
    do {
        printf("\n1. Preorder\n2. Inorder\n3. Postorder\n4. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Preorder: ");
                preorder(root);
                printf("\n");
                break;
            case 2:
                printf("Inorder: ");
                inorder(root);
                printf("\n");
                break;
            case 3:
                printf("Postorder: ");
                postorder(root);
                printf("\n");
                break;
            case 4:
                return;
        }
    } while (1);
}

// Count nodes
int count_nodes(node *t) {
    if (!t) return 0;
    return count_nodes(t->lchild) + count_nodes(t->rchild) + 1;
}

int count_leaf_nodes(node *t) {
    if (!t) return 0;
    if (!t->lchild && !t->rchild) return 1;
    return count_leaf_nodes(t->lchild) + count_leaf_nodes(t->rchild);
}

int count_parent_nodes(node *t) {
    if (!t) return 0;
    if (t->lchild || t->rchild)
        return 1 + count_parent_nodes(t->lchild) + count_parent_nodes(t->rchild);
    return 0;
}

// Height
int height(node *t) {
    if (!t) return 0;
    int hl = height(t->lchild);
    int hr = height(t->rchild);
    return (hl > hr ? hl : hr) + 1;
}

// Balanced check for root
void balanced_nodes(node *t) {
    int cl = count_nodes(t->lchild);
    int cr = count_nodes(t->rchild);
    if (cl == cr)
        printf("Nodes are balanced at root\n");
    else if (cl > cr)
        printf("Nodes are left imbalanced at root\n");
    else
        printf("Nodes are right imbalanced at root\n");
}

void balanced_height(node *t) {
    int hl = height(t->lchild);
    int hr = height(t->rchild);
    if (hl == hr)
        printf("Height is balanced at root\n");
    else if (hl > hr)
        printf("Height is left imbalanced at root\n");
    else
        printf("Height is right imbalanced at root\n");
}

// Minimum & Maximum
node* find_min(node *t) {
    while (t && t->lchild) t = t->lchild;
    return t;
}

node* find_max(node *t) {
    while (t && t->rchild) t = t->rchild;
    return t;
}

// Delete node
node* delete_node(node *t, int key) {
    if (!t) return NULL;
    if (key < t->data)
        t->lchild = delete_node(t->lchild, key);
    else if (key > t->data)
        t->rchild = delete_node(t->rchild, key);
    else {
        if (!t->lchild) {
            node *temp = t->rchild;
            free(t);
            return temp;
        } else if (!t->rchild) {
            node *temp = t->lchild;
            free(t);
            return temp;
        } else {
            node *temp = find_min(t->rchild);
            t->data = temp->data;
            t->rchild = delete_node(t->rchild, temp->data);
        }
    }
    return t;
}

// Search
void search() {
    node *temp = root;
    int x;
    printf("Enter data to search: ");
    scanf("%d", &x);
    while (temp) {
        if (x == temp->data) {
            printf("%d is found\n", x);
            return;
        }
        temp = (x < temp->data) ? temp->lchild : temp->rchild;
    }
    printf("%d is not found\n", x);
}

// Free memory
void free_tree(node *t) {
    if (!t) return;
    free_tree(t->lchild);
    free_tree(t->rchild);
    free(t);
}

int main() {
    int ch, key;
    do {
        printf("\n1.Create\n2.Traversal\n3.Count nodes\n4.Count leaf nodes\n5.Count parent nodes\n");
        printf("6.Height\n7.Balanced nodes\n8.Balanced height\n9.Minimum\n10.Maximum\n11.Delete node\n12.Search\n0.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1: create(); break;
            case 2: traversal(); break;
            case 3: printf("Number of nodes: %d\n", count_nodes(root)); break;
            case 4: printf("Number of leaf nodes: %d\n", count_leaf_nodes(root)); break;
            case 5: printf("Number of parent nodes: %d\n", count_parent_nodes(root)); break;
            case 6: printf("Height: %d\n", height(root)); break;
            case 7: balanced_nodes(root); break;
            case 8: balanced_height(root); break;
            case 9: {
                node *minNode = find_min(root);
                if(minNode) printf("Minimum: %d\n", minNode->data);
                break;
            }
            case 10: {
                node *maxNode = find_max(root);
                if(maxNode) printf("Maximum: %d\n", maxNode->data);
                break;
            }
            case 11:
                printf("Enter node to delete: ");
                scanf("%d", &key);
                root = delete_node(root, key);
                printf("%d deleted (if it existed)\n", key);
                break;
            case 12: search(); break;
            case 0: free_tree(root); exit(0);
        }
    } while(1);

    return 0;
}