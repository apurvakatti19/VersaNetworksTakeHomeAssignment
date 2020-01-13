#include <iostream>
using namespace std;

#include "CircularList.h"

int main()
{
    int choice, element, position,elementSearched,index,pos,value;
    CircularList cll;

    do
    {
        cout<<endl<<"---------------------------"<<endl;
        cout<<endl<<"Circular singly linked list"<<endl;
        cout<<endl<<"---------------------------"<<endl;
        cout<<"1.Add at the beginning of an element"<<endl;
        cout<<"2.Add at end of an element"<<endl;
        cout<<"3.Add at a particular index"<<endl;
        cout<<"4.Delete"<<endl;
        cout<<"5.Display the list"<<endl;
        cout<<"6.Find an element in the linkedList"<<endl;
        cout<<"7.Get the size of the linkedList"<<endl;
        cout<<"8.Update an element"<<endl;
        cout<<"0.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the element: ";
                cin>>element;
                cll.prepend(element);
                break;
            case 2:
                cout<<"Enter the element: ";
                cin>>element;
                cll.append(element);
                cout<<endl;
                break;
            case 3:
                cout<<"Enter the element: ";
                cin>>element;
                cout<<"Insert element at position: ";
                cin>>position;
                cll.insert(element,position);
                cout<<endl;
                break;
            case 4:

                cout<<"Enter the element for deletion: ";
                cin>>element;
                cll.Delete(element);
                cout<<endl;
                break;
            case 5:
                cout<<endl;
                cll.print();
                cout<<endl;
                break;
            case 6:cout<<"Enter the element to be searched";
                   cin>>elementSearched;
                   index = cll.find(elementSearched);
                   if(index==-1)
                       cout<<"Element not found!";
                   else
                       cout<<"The "<<elementSearched<<" is found at:"<<index<<"position";
                   break;
            case 7:
                    cout<<"The current size of the linked list is:"<<cll.getSize();
                    break;
            case 8:
                cout<<"Enter the node position to be updated: ";
                cin>>pos;
                cout<<"Enter the new value: ";
                cin>>value;
                cll.update(value,pos);
            case 0:
                break;
            default:
                cout<<"Choice does not exit.Please choose from the options only!"<<endl;
        }
    }while(choice!=0);
    return 0;
}