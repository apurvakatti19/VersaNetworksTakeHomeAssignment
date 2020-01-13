# VersaNetworksTakeHomeAssignment
## Overview
 Created a C++ library that implements circular linked list append, prepend, insert, delete, print, find, getSize and update functions and also a C wrapper for the C++ library created above to expose the above functionalities.
 
## Assumptions
 Since we are exposing C++ methods using a C wrapper, I assumed the data to be inserted into Circular Linked List as integers and removed the template declaration I had done initially.
 
## Usage

```C
#include "Wrapper.h"
CircularClass_prepend(c,element);
CircularClass_append(c,element);
CircularClass_insert(c,element,position);
CircularClass_delete(c,element);
CircularClass_print(c);
index = CircularClass_find(c,elementSearched);
size = CircularClass_size(c);
CircularClass_update(c,value,pos);
```
## Running the tests
I have created a test stub (test.c) which will run the automated tests for all the above mentioned methods.

```bash
cd VersaTakeHome
make test
./linkedList
```
I have also provided a test (main.c) which accepts elements (values) from the user and performs the above mentioned functionalities.

```bash
cd VersaTakeHome
make user
./linkedList
```





