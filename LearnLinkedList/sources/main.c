/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include "../include/exemple_list.h"

list_s *initialise_first_node(void)
{
    list_s *list1 = malloc(sizeof(list_s));
    if (list1 == NULL) {
        perror("malloc");
        return (NULL);
    }
    list1->next = NULL;
    list1->first = list1;
    list1->number = 0;
    return (list1);
}

void add_new_node(list_s *list)
{
    if (list == NULL)
        return;
   list_s *new = malloc(sizeof(list_s));
   if (new == NULL)
       return;
   list->next = new;
   new->next = NULL;
   new->number = list->number + 1;
   new->first = list->first;
   return;
}

void free_list(list_s *list)
{
    list_s *temp;

    while (list != NULL) {
        temp = list;
        list = list->next;
        free(temp);
    }
}