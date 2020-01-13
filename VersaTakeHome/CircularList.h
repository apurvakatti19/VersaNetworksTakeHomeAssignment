//
// Created by Apurva Katti on 2020-01-11.
//

#ifndef ASSIGNMENT_CIRCULARLIST_H
#define ASSIGNMENT_CIRCULARLIST_H


#include<stdlib.h>



struct Node {
    int data;
    struct Node *link;
};


class CircularList {
private:
    struct Node*last;

    void addToEmpty(int data);

    int size = 0;
public:
    CircularList();

    ~CircularList();

    void prepend(int data);

    void append(int data);

    void insert(int item, int index);

    void Delete(int element);

    void print();

    int find(int element);

    int getSize();

    void update(int elementUpdated, int position);

};




#endif //ASSIGNMENT_CIRCULARLIST_H
