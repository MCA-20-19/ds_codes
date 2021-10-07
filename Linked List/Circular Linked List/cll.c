#include <stdio.h>
#include <stdlib.h>
#include "cll.h"

int main(void) {
cnode *elements = NULL;
for (int i = 0; i < 10; i++) {
elements = cll_insert(elements, i);
}
cll_print(elements);
cll_insert_after_head(elements, 99);
cll_print(elements);
cnode *req_element = cll_find(elements, 0);
elements=delete_node(elements,req_element);
cll_print(elements);
return 0;
}
