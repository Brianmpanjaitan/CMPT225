#include <string>
#include <iostream>
#include "linkedList.h"

using namespace std; 

// Default constructor
linkedList::linkedList()
{
	head = NULL;
	size = 0;
}

linkedList::linkedList(const linkedList& lst)
{
    if (lst.head == NULL)
    {
        head = NULL;
        size = 0;
    }

    else
    {
        head = new node;
        head -> data = lst.head -> data;
        node *newNode = head;
        node *oldNode = lst.head -> next;
        while (oldNode != NULL)
        {
            newNode -> next = new node;
            newNode = newNode -> next;
            newNode -> data = oldNode -> data;
            oldNode = oldNode -> next;
        }
        newNode -> next = NULL;
        size = lst.size;   
    }
}

void linkedList::add(int x)
{
    node* prev = new node;
    prev->data = x;
    prev->next = head;
    head = prev;
    size++;
}

bool linkedList::removeNode(int x) //removes the node that contains x
{
    node* prev = head;
    node* temp = NULL;

    if(head == NULL) //list is empty
    {
		return 0;
	}

    else if(head->data == x) //head is the node containing x
    {
        head = head->next;
		delete prev;
		size--;
        return 1;
    }

    else //check the list if x exists
    {
        while(prev->next != NULL) //traverse
        {
            if(prev->next->data == x) //x is found
            {
                temp = prev->next;
                prev->next = prev->next->next;
                delete temp;
                return 1;
            }
            prev = prev->next;
        }
    }
    return 1;
}

int linkedList::findLargest() //find the largest int in the list
{
    int largest = head->data;
    node* curr = head;

    while(curr != NULL) //traverse
    {
        if(curr->data > largest) //current node is bigger than largest int
        {
            largest = curr->data;
        }
        curr = curr->next; //iterate
    }
    return largest;
}

 bool linkedList::empty()
{
    node* prev = head;
    if(prev == 0)
    {
        return 1;
    }
    return 0;
}

bool linkedList::findNum(int x) //checks if the int x is a node in the list
{
    node* curr = head;
    while(curr != NULL)
    {
        if(curr->data == x)
        {
            return 1;
        }
        curr = curr->next;
    }
    return 0;
}