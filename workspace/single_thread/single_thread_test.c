#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "../library.c"

struct coppia{
	int x,y;
};


int main(){
	struct lfds711_stack_state stack;	
	struct lfds711_stack_element element;
	struct coppia *c;

	lfds711_stack_init_valid_on_current_logical_core(&stack,NULL);

	c = (struct coppia*)malloc(sizeof(struct coppia));
	c->y = 1;
	c->x = 2;
	

	LFDS711_STACK_SET_VALUE_IN_ELEMENT(element,c);
	 int aaa = ((struct coppia*)LFDS711_STACK_GET_VALUE_FROM_ELEMENT(element))->x;
	lfds711_stack_push(&stack,&element);

	// struct lfds711_stack_element *e;
	// int res = lfds711_stack_pop(&stack,&e);
	// struct coppia *result = (struct coppia*)LFDS711_STACK_GET_VALUE_FROM_ELEMENT(*e); 
	// printf("Result %d : %d\n",result->x,result->y);

	// // lfds711_stack_cleanup(&stack,NULL);
	// int s = result->x;
	// assert(s == 2);
	assert(0);
	return 0;

	
}