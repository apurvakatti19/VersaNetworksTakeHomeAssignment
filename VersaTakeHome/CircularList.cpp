//
// Created by Apurva Katti on 2020-01-11.
//
#include "CircularList.h"

#include <iostream>
using namespace std;

//constructor
CircularList::CircularList()
{
    this->last = nullptr;

}
//destructor
CircularList::~CircularList()
{
    delete last;

}

//private function to add elements when the list is empty
void CircularList::addToEmpty(int data) {

    Node* temp = new Node;
    temp->data = data;
    this->last = temp;

    this->last->link = temp;
    this->size+=1;

    cout<<"Element "<<data<<" inserted"<<endl;
}

//add to the beginning
void CircularList::prepend(int data)
{

    if (last == nullptr)
        this->addToEmpty(data);

    else {
        Node *temp = new Node;
        temp->data = data;
        temp->link = this->last->link;
        this->last->link = temp;
        this->size += 1;
        cout<<"Element "<<data<<" inserted"<<endl;
    }


}

//add to the end
void CircularList::append(int data)  {

    if (this->last == nullptr)
        this->addToEmpty(data);

    else{
        struct Node* temp = new Node;


        temp -> data = data;

        temp -> link = this->last->link;
        this->last -> link = temp;
        this->last = temp;
        this->size+=1;
        cout<<"Element "<<data<<" inserted"<<endl;
    }

}

//insert element at a given index
void CircularList::insert(int item, int index) {
//when the list is empty!
	if (this->last==nullptr)
    {
		if (index==0)
        {
			this->addToEmpty(item);
		}
		else{
			cout<<"The entered index is out of bound"<<endl;
		}
		
	}
	else{

	    struct Node*n,*prev;

	    int counter = 0;

	    n = this->last->link;

        //insert at all other indexes except the first
	    if(index>0 && index<=this->getSize()-1)
	    {
	        do
	        {
	            if (counter == index)
	            {

	                struct Node* temp = new Node;
	                temp -> data = item;
	                temp -> link = n;
	                prev->link = temp;


	                this->size+=1;
	                cout<<"element "<<item<<" inserted"<<endl;
	                break;
	            }
	            else{
	                //cout<<"im here"<<endl;
	                prev = n;
	                n = n-> link;
	                counter++;
	            }

	        } while (n != this->last -> link);

	    }
	    else if(index==0)
        {
            //insert at the first index(0)
	    	this->prepend(item);
	    }
	    else{
	        cout<<"The entered index is out of bound"<<endl;
	    }
	}
}


void CircularList::Delete(int element) {


    if (this->last == NULL)
    {
        cout<<"List is empty, nothing to delete"<<endl;
        return;
    }

    struct Node *temp, *n;

    n = this->last->link;
    //delete the only element
    if (this->last->link == this->last && this->last->data ==element)
    {
        temp = this->last;
        this->last = nullptr;
        delete temp;
        cout<<"Element "<<element;
        cout<<" deleted from the list"<<endl;
        this->size-=1;
        return;

    }
    //delete the first element
    if (n->data == element)
    {
        temp = n;
        this->last->link = n->link;
        delete temp;
        cout<<"Element "<<element;
        cout<<" deleted from the list"<<endl;
        this->size-=1;
        return;

    }
    while (n->link != this->last)
    {
        //Deletion of Element in between
        if (n->link->data == element)
        {
            temp = n->link;
            n->link = temp->link;
            delete temp;
            cout<<"Element "<<element;
            cout<<" deleted from the list"<<endl;
            this->size-=1;
            return;

        }
        n = n->link;
    }
    //Deletion of last element
    if (n->link->data == element)
    {
        temp = n->link;
        n->link = last->link;
        delete temp;
        last = n;
        cout<<"Element "<<element;
        cout<<" deleted from the list"<<endl;
        this->size-=1;
        return;

    }
    cout<<"Element "<<element<<" not found in the list"<<endl;

}


void CircularList::print()
{
    struct Node* n;


    if (this->last == nullptr)
    {
        cout << "Circular Linked List is empty." << endl;
        return;
    }

    n = this->last->link;

    cout<<"The current circular linked list is:";

    /*do
    {

        cout << n->data <<" ";

        n = n->link;

        cout<<"n element is:"<<n->data<<endl;

    }while(n!=this->last->link);*/

    while (n!= this->last)
    {
        //cout<<"last element"<<this->last->data<<endl;
        cout<<n->data<<"->";
        n = n->link;
    }
    cout<<n->data<<endl;





}


int CircularList::find(int element)
{
    struct Node *n;
    int counter = 0;
//when the list is empty;return error
    if(this->last==nullptr)
    {
        return 0;
    }
        
    //when the element is preent at the last index;return the length
    n = this->last->link;
    if(element==this->last->data)
    {
        return getSize();

    }
    else {

//all other indexes
        while (n != this->last) {
            if (n->data == element) {

                return counter+1;
            }
            n = n->link;
            counter++;
        }
    }

   return -1;
}


int CircularList::getSize() {
    return this->size;
}


void CircularList::update(int elementUpdated,int position) {

    int i;
    //empty list
    if (this->last == nullptr)
    {
        cout<<"List is empty, nothing to update"<<endl;
        return;
    }

    struct Node *n;
    n = this->last->link;

    
    for (i = 0;i < position - 1;i++)
    {
        if (n == this->last)
        {
            cout<<"There are less than "<<position<<" elements.";
            cout<<endl;
            return;
        }
        n = n->link;
    }
    n->data = elementUpdated;
    cout<<"Node Updated"<<endl;
}
