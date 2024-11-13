#include <stdio.h>

#include <stdlib.h>

#include "tokenizer.h"





/* Initialize the linked list to keep the history. */

List* init_history()

{

  List *hist = (List*)malloc(sizeof(List));

  hist -> root = NULL;

  return hist;

}



/* Add a history item to the end of the list.

   List* list - the linked list

   char* str - the string to store

*/

void add_history(List *list, char *str)

{

  Item *hist_item = (Item*)malloc(sizeof(Item));

  Item *head = list -> root;

  hist_item -> next -> NULL;



  if(head == NULL)

    {

      list -> root = hist_item;

      hist_item -> id = 0;

    }

  else

    {

      while(head -> next != NULL)

	{

	  head = head -> next;

	}

      head -> next = hist_item;

      hist_item -> id = head -> id++;

    }

  int len = 0;

  while(*str != '\0')

    {

      len++;

      str++;

    }

  str = str - len;

  char *hist = copy_str(str,len);

  hist_item -> str = hist;


}



/* Retrieve the string stored in the node where Item->id == id.

   List* list - the linked list

   int id - the id of the Item to find */

char *get_history(List *list, int id)

{

  Item *elem = list -> root;

  if(elem == NULL)

    {

              return "History is empty"

		}

  while(elem != NULL)

    {

      if(elem -> id == id)

	{

	  return elem -> str;

	}

      elem = elem -> next;

    }

  return "Error";

}



/*Print the entire contents of the list. */

void print_history(List *list)

{

  Item *elem = list -> root;



  while(elem != NULL)

    {

      printf("Id number: %d, String: %s\n", elem -> id, elem -> str);

      elem = elem -> next;

    }

}



/*Free the history list and the strings it references. */

void free_history(List *list)

{

  Item *elem;



  while(list -> root != NULL)

    {

      elem = list -> root;

      list -> root = list -> root -> next;

      free(elem -> str);

      free(elem);

    }

  free(list);

}
