/*
 * linked_lists.h
 *
 *  Created on: Apr 16, 2021
 *      Author: User
 */

#include "struct.h"

#ifndef LINKED_LISTS_H_
#define LINKED_LISTS_H_
#include "struct.h"

struct node
{
   struct student S;
   struct node *next;
};

typedef struct node Node;


/**************************************************
 * Function Name:           sizeOfList
 * Function Description:    to sum the number of nodes in the list
 *
 * Arguments:               ------
 * Return:                  integer
 * ***********************************************/
int sizeOfList();


/***********************************************
 * Function Name:           printList
 * Function Name:           loop on the list and then print the values of current node
 *                          and then go to the next one
 * Arguments:               ----------
 * Returns:                 void
 * ********************************************/
void printList();

/*************************************************
 * Function Name:           insertInTheBeginning
 * Function Description:    first, to allocate memory for the new node. then , to move the elements from
 *                          the given structure to the node and to set the head pointer
 * Arguments:               structure that contains the values of node that should be added
 * Returns:                 void
 * **********************************************/
void insertInTheBeginning(student s);


/*************************************************
 * Function Name:           insertAtTheLast
 * Function Description:    first, to allocate memory for the new node. then , to move the elements from
 *                          the given structure to the node and to set the tail pointer
 * Arguments:               structure that contains the values of node that should be added
 * Returns:                 void
 * **********************************************/
void insertAtTheLast(student s);

/***********************************************
 * Function Name:           insertNodeInsideList
 * Function Description:    first, to allocate memory for the new node. then , to move the elements from
 *                          the given structure to the node
 *                          check if the array size smaller than in the input position
 *
 * Arguments:               structure that contains the values of node that should be added
 *                          integer that represent the position where the node should be put
 * Returns:                 void
 * *******************************************/

void insertNodeInsideList(student s,int position);


#endif /* LINKED_LISTS_H_ */
