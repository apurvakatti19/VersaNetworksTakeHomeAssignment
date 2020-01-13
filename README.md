# VersaNetworksTakeHomeAssignment
## Overview
 Created a C++ library that implements circular linked list append,prepend,insert,delete,print,find,getSize and update functions and also a C wrapper for the C++ library created above to expose the above functionalities.
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

