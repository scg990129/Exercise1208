//
//  main.cpp
//  Exercise1208
//
//  Created by Jacob Yeung on 10/4/23.
//

#include <iostream>
#include "unorderedArrayListType.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...

    unorderedArrayListType myList;

        // Insert some elements
        myList.insert(10);
        myList.insert(20);
        myList.insert(30);
        myList.insert(20); // Inserting a duplicate

        std::cout << "Original List: \n";
        myList.print(); // Should print "10 20 30 20"

        // Remove all occurrences of 20
        

        std::cout << "\nList after removeAll(20): \n";
        myList.print(); // Should print "10 30"

        // Remove the first occurrence of 10
        myList.remove(10);

        std::cout << "\nList after remove(10): \n";
        
        myList.print(); // Should print "30"
        
        std::cout << "\nList after removeAll(): \n";
        myList.removeAll();
        myList.print();
    
    return 0;
}
