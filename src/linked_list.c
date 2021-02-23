#include "linked_list.h"

t_list	*list_create(void *_content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	list_add_front(t_list **_list_first, t_list *_to_add)
{
	*_list_first = 

}
