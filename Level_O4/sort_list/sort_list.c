
#include "list.h"
#include <stdlib.h>
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
   t_list *tmp = lst;
   int swp = 0  ;

   while (lst->next)
   {
      if (cmp (lst->data,lst->next->data) == 0)
      {
         swp = lst->data;
         lst->data = lst->next->data;
         lst->next->data = swp;
         lst = tmp;
      }
      else
         lst = lst->next;
   }
   lst = tmp;
   return (lst);
}
