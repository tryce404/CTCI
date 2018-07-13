#ifndef HASHMAP_H
#define HASHMAP_H

#include "HashEntry.h"

class HashMap {

private:
      HashEntry **table;

public:
      HashMap();
      int get(int key);
      void put(int key, int value);     
      ~HashMap();
};

#endif
