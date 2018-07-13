#ifndef HASHENTRY_H
#define HASHENTRY_H

class HashEntry {
private:
      int key;
      int value;

public:
      HashEntry(int key, int value);
      int getKey();
      int getValue();
};

#endif
