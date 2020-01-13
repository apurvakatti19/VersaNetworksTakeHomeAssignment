#include "Wrapper.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    int choice, element, position,elementSearched,index,pos,value;
    struct CircularList* c = newCircularClass();

    do
    {
        printf("---------------------------\n");
        printf("Circular singly linked list\n");
        printf("---------------------------\n");
        printf("1.Add at the beginning of an element\n");
        printf("2.Add at end of an element\n");
        printf("3.Add at a particular index\n");
        printf("4.Delete\n");
        printf("5.Display the list\n");
        printf("6.Find an element in the linkedList\n");
        printf("7.Get the size of the linkedList\n");
        printf("8.Update an element\n");
        printf("0.Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the element: ");
                scanf("%d",&element);
                CircularClass_prepend(c,element);
                break;
            case 2:
                printf("Enter the element: ");
                scanf("%d",&element);
                CircularClass_append(c,element);
                printf("\n");
                break;
            case 3:
                printf("Enter the element: ");
                scanf("%d",&element);
                printf("Insert element at position: ");
                scanf("%d",&position);
                CircularClass_insert(c,element,position);
                printf("\n");
                break;
            case 4:

                printf("Enter the element for deletion: ");
                scanf("%d",&element);
                CircularClass_delete(c,element);
                printf("\n");
                break;
            case 5:
                printf("\n");
                CircularClass_print(c);
                printf("\n");
                break;
            case 6:printf("Enter the element to be searched:");
                scanf("%d",&elementSearched);
                index = CircularClass_find(c,elementSearched);
                if(index==-1)
                    printf("Element not found!\n");
                else if(index==0)
                    printf("circular list is empty!\n");
                else
                    printf("The element is found at %d position",index);
                break;
            case 7:
                printf("The current size of the linked list is:%d\n",CircularClass_size(c));
                break;
            case 8:
                printf("Enter the node position to be updated: ");
                scanf("%d",&pos);
                printf("Enter the new value: ");
                scanf("%d",&value);
                CircularClass_update(c,value,pos);
            case 0:
                break;
            default:
                printf("Choice does not exit.Please choose from the options only!\n");
        }
    }while(choice!=0);
    return 0;

}
