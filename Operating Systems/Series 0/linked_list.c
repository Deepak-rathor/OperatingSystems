/* gcc -Wall -O2 linked_list.c */
/* valgrind ./a.out */

#include <stdio.h>
#include <stdlib.h>

struct elem {
	int pos;
	struct elem *next;
};


static void panic(const char *serror)
{
	printf("%s", serror);
	exit(1);
}

static void *xmalloc(size_t size)
{
	void *ptr;
	if (size == 0)
		panic("Size is 0!\n");
	ptr = malloc(size);
	if (!ptr)
		panic("No mem left!\n");
	return ptr;
}

static void xfree(void *ptr)
{
	if (ptr == NULL)
		panic("Got Null-Pointer!\n");
	free(ptr);
}

static struct elem *init_list(size_t len)
{
	//creates head
	struct elem *head;
	head=xmalloc(sizeof(struct elem));
	if(head== NULL){
		return NULL;
	}
	head->pos=0;

	//returns if the list consists of one element
	if(len==1){
		return head;
	}

	//creates first link
	struct elem* conductor=xmalloc(sizeof(struct elem));
	head->next=conductor;
	head->next->pos= (int)1;

	// creates the list
	int i=1;
	while(i<len){

		conductor->next=xmalloc(sizeof(struct elem));
		conductor=conductor->next;
		conductor->pos=i+1;
		i++;
	}

	conductor->next=head;

	return head;
}

static void clean_list(struct elem *head, size_t len)
{
	struct elem *current=head;
	struct elem *next;

	int i=0;
	while(i<len){
		next=current->next;
		free(current);
		current=next;
		i++;
	}
}

static void traverse_list(struct elem *head, int times)
{
	if(head==NULL){
		printf("Linked List is empty!");
		return;
	}

	struct elem *current=head;
	int i=0;
	while(i<times){
		printf("The current position is %d in iteration number %d.\n",current->pos,i);
		current=current->next;

		if(head==current) {
			i++;
		}
	}
}

int main(void)
{
	struct elem *head = NULL;
	size_t len = 10;
	head = init_list(len);

	/* ... */
	traverse_list(head,2);

	clean_list(head,len);
	traverse_list(head,2);

	return 0;
}

