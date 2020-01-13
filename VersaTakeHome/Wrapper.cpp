//
// Created by Apurva Katti on 2020-01-12.
//

#include "Wrapper.h"
#include "CircularList.h"



extern "C" {

CircularList* newCircularClass()
{
    return new CircularList();
}

void CircularClass_prepend(CircularList* c, int i)
{
    c->prepend(i);
}
void CircularClass_append(CircularList*c,int i)
{
    c->append(i);
}
void CircularClass_insert(CircularList*c,int element,int position)
{
    c->insert(element,position);
}
void CircularClass_delete(CircularList*c,int element)
{
    c->Delete(element);
}
void CircularClass_print(CircularList*c)
{
    c->print();
}
int CircularClass_find(CircularList*c,int element)
{
    return c->find(element);
}
int CircularClass_size(CircularList*c)
{
    return c->getSize();
}
void CircularClass_update(CircularList*c,int element,int position)
{
    c->update(element,position);
}

}


