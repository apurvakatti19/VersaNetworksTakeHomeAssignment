#include <stdio.h>

#include "Wrapper.h"

int main(int argc, char* argv[])
{
    int index;
    //creating struct objects to test the circular list methods
    struct CircularList* c1 = newCircularClass();
    struct CircularList* c2 = newCircularClass();
    struct CircularList* c3 = newCircularClass();
    struct CircularList* c4 = newCircularClass();
    struct CircularList* c5 = newCircularClass();
    struct CircularList* c6 = newCircularClass();
    
    //prepend function adds the new element to the beginning of the list
    //append function adds the new element to the end of the list
    //insert function adds the element at the given index;provides error if index not found and also when inserting into an empty list!
    //print function prints the current linked list
    //find fucntion searches for the given element and returns the positon.
    //getsize function provides the size of the list
    //update function updates the element(by position) toa a new value.
    
    CircularClass_prepend(c1,82);
    CircularClass_append(c1,34);
    CircularClass_insert(c1,25,1);
    CircularClass_print(c1);
    printf("\n");
    
    CircularClass_delete(c1,34);
    CircularClass_append(c1,57);
    CircularClass_prepend(c1,100);
    CircularClass_delete(c1,5);
    CircularClass_prepend(c1,61);
    CircularClass_insert(c1,123,3);
    CircularClass_print(c1);
    printf("\n");


    CircularClass_insert(c2,156,0);
    CircularClass_delete(c2,156);
    CircularClass_print(c2);
    printf("\n");

    CircularClass_insert(c2,91,2);
    CircularClass_insert(c2,99,0);
    CircularClass_append(c2,134);
    CircularClass_append(c2,876);
    CircularClass_prepend(c2,11);
    CircularClass_print(c2);
    CircularClass_delete(c2,150);
    printf("\n");


    index = CircularClass_find(c3,876);
    if(index==-1)
        printf("Element not found!\n");
    else if(index==0)
        printf("Circular list is empty!\n");
    else
        printf("The element is found at:%d",index);


    printf("The current size of the circular list is %d\n",CircularClass_size(c3));

    CircularClass_update(c4,333,3);
    CircularClass_print(c4);
    printf("\n");

    CircularClass_append(c5,555);
    CircularClass_insert(c5,345,1);
    CircularClass_prepend(c5,444);
    CircularClass_print(c5);
    CircularClass_delete(c5,555);
    CircularClass_print(c5);
    CircularClass_delete(c5,345);
    CircularClass_delete(c5,444);
    CircularClass_print(c5);
    printf("\n");

    
    printf("The current size of the circular list is %d\n",CircularClass_size(c6));
    CircularClass_update(c6,121,1);
    CircularClass_append(c6,154);
    CircularClass_append(c6,634);
    printf("The current size of the circular list is %d\n",CircularClass_size(c6));
    CircularClass_print(c6);
    CircularClass_update(c6,1000,2);
    CircularClass_print(c6);
    
    
    return 0;



}
