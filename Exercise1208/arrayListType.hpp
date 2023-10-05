//
//  arrayListType.hpp
//  Exercise1208
//
//  Created by Jacob Yeung on 10/4/23.
//

#ifndef arrayListType_hpp
#define arrayListType_hpp

#include <stdio.h>

#include "unorderedArrayListType.hpp"

class arrayListType : public unorderedArrayListType {
//private:
//    int *list; // Pointer to the dynamic array
//    int maxSize; // Maximum size of the list
//    int length; // Current length of the list
public:
    arrayListType(int size = 100); // Constructor with default size
    ~arrayListType(); // Destructor
    void insert(int item); // Insert an item at the end
    void removeAll(); // Remove all occurrences of the item
    void remove(); // Remove the first occurrence of the item
    void remove(int item); // Remove the first occurrence of the item
    void print(); // Print the list
};

#endif /* arrayListType_hpp */
