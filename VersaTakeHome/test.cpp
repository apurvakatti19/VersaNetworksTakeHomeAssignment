//
// Created by Apurva Katti on 2020-01-12.
//

#include <iostream>
#include <iomanip>
#include "CircularList.h"
using namespace std;

int main()
{
    int index;
    CircularList cl1,cl2,cl3,cl4,cl5;
    cl1.prepend(5);
    cl1.append(34);
    cl1.insert(25,1);
    cl1.print();

    cl1.Delete(34);
    cl1.append(57);
    cl1.prepend(100);
    cl1.Delete(5);
    cl1.prepend(61);
    cl1.insert(123,3);
    cl1.print();


    cl2.insert(156,0);
    cl2.Delete(156);
    cl2.print();

    cl2.insert(91,2);
    cl2.insert(99,0);
    cl2.append(134);
    cl2.append(876);
    cl2.prepend(11);
    cl2.print();
    cl2.Delete(150);

    index = cl3.find(876);
    if(index==-1)
        cout<<"Element not found!";
    else
        cout<<"The element is found at:"<<index<<"position";


    cout<<"The current size of the circular list is"<<cl3.getSize();

    cl4.update(333,3);
    cl4.print();


    cl5.append(555);
    cl5.insert(345,1);
    cl5.prepend(444);
    cl5.print();
    cl5.Delete(555);
    cl5.print();
    cl5.Delete(345);
    cl5.Delete(444);
    cl5.print();
    

    return 0;
}


