//
//  unorderedArrayListType.hpp
//  Exercise1208
//
//  Created by Jacob Yeung on 10/4/23.
//

#ifndef unorderedArrayListType_hpp
#define unorderedArrayListType_hpp

#include <stdio.h>

class unorderedArrayListType {
protected:
    int *list; // Pointer to the dynamic array
    int maxSize; // Maximum size of the list
    int length; // Current length of the list
public:
    unorderedArrayListType(int size = 100); // Constructor with default size
    ~unorderedArrayListType(); // Destructor
    void insert(int item); // Insert an item at the end
    void removeAll(); // Remove all occurrences of the item
    void remove(); // Remove the first occurrence of the item
    void remove(int item); // Remove the first occurrence of the item
    void print(); // Print the list
};

#endif /* unorderedArrayListType_hpp */
