#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

typedef struct __element {
    char *value;
    struct __element *next;
    struct list_head list;
} list_ele_t;

typedef struct queue{
    list_ele_t *head; /* Linked list of elements */
    list_ele_t *tail;
    size_t size;
    struct list_head list;
} queue_t;

static list_ele_t *get_middle(struct list_head *list);

static void list_merge(struct list_head *lhs,
                       struct list_head *rhs,
                       struct list_head *head);

void list_merge_sort(queue_t *q);

static bool validate(queue_t *q);

static queue_t *q_new();

static void q_free(queue_t *q);

bool q_insert_head(queue_t *q, char *s);
