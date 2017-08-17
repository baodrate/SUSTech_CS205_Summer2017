//*****************************************************************
//  LinkedList.cpp
//  HashTable
//
//  Created by Karlina Beringer on June 16, 2014.
//
//  This header file contains the Linked List class declaration.
//  Hash Table array elements consist of Linked List objects.
//*****************************************************************

#include "LinkedList.h"
extern int pathsize;
extern int tot;
// Constructs the empty linked list object.
// Creates the head node and sets length to zero.
LinkedList::LinkedList()
{
    head = new Item {"Head",0, "", NULL,NULL};
    head -> next = NULL;
    length = 0;
}

// Inserts an item at  the list，sorted by size.
void LinkedList::insertItem( Item * newItem )
{  if(tot>=0){ 
    tot++;
    if(!(tot%5))cerr<<"remind:"<<tot<<" files have been scanned\n";
    }
    if (!head -> next)
    {
        head -> next = newItem;
        length++;
        return;
    }
    Item * p = head->next;
      Item * q = head->next;
    while ((p!=NULL))

    {   
       
        q=p;
        if(newItem->size==p->size)
        {//cout<<"ok1"<<endl;
         if(newItem->md5=="")newItem->md5=hashMd5(newItem->fp);
        //cout<<"*"<<newItem->md5<<endl;
        if(p->md5=="")p->md5=hashMd5(p->fp);
        //cout<<"ok3"<<endl;
        if(newItem->md5==p->md5)
        {
        //cout<<p->key<<endl;
       cout<<(p->key).substr(pathsize+1,(p->key).length()-1)<<"\t"<<(newItem->key).substr(pathsize+1,(newItem->key).length()-1)<<endl;
        delete newItem;
        return;
        }
        }
       p = p -> next;
    }
    q -> next = newItem;
    newItem -> next = NULL;
    length++;
}

// Removes an item from the list by item key.
// Returns true if the operation is successful.
bool LinkedList::removeItem( string itemKey )
{
    if (!head -> next) return false;
    Item * p = head;
    Item * q = head;
    while (q)
    {
        if (q -> key == itemKey)
        {
            p -> next = q -> next;
            delete q;
            length--;
            return true;
        }
        p = q;
        q = p -> next;
    }
    return false;
}

// Searches for an item by its key.
// Returns a reference to first match.
// Returns a NULL pointer if no match is found.
Item * LinkedList::getItem( string itemKey )
{
    Item * p = head;
    Item * q = head;
    while (q)
    {
        p = q;
        if ((p != head) && (p -> key == itemKey))
            return p;
        q = p -> next;
    }
    return NULL;
}

// Displays list contents to the console window.
void LinkedList::printList()
{
    if (length == 0)
    {
        cerr << "\n{ }\n";
        return;
    }
    Item * p = head;
    Item * q = head;
    cerr << "\n{ ";
    while (q)
    {
        p = q;
        if (p != head)
        {
            cerr << p -> key<< " | "<< p -> size << " | "<<p -> md5;
            if (p -> next) cerr << ", ";
            else cerr << " ";
        }
        q = p -> next;
    }
    cerr << "}\n";
}

// Returns the length of the list.
int LinkedList::getLength()
{
    return length;
}
// De-allocates list memory when the program terminates.
LinkedList::~LinkedList()
{
    Item * p = head;
    Item * q = head;
    while (q)
    {
        p = q;
        q = p -> next;
        if (q) delete p;
    }
}
//*****************************************************************
// End of File
//*****************************************************************


















