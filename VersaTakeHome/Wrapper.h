//
// Created by Apurva Katti on 2020-01-12.
//

#ifndef ASSIGNMENT_WRAPPER_H
#define ASSIGNMENT_WRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CircularList circularList;
struct CircularList* newCircularClass();
void CircularClass_prepend(struct CircularList* c, int i);
void CircularClass_append(struct CircularList*c,int i);
void CircularClass_insert(struct CircularList*c,int element,int position);
void CircularClass_delete(struct CircularList*c,int element);
void CircularClass_print(struct CircularList*c);
int CircularClass_find(struct CircularList*c,int element);
int CircularClass_size(struct CircularList*c);
void CircularClass_update(struct CircularList*c,int element,int position);
void deleteMyClass(struct CircularList* c);
#ifdef __cplusplus
}

#endif
#endif //ASSIGNMENT_WRAPPER_H
