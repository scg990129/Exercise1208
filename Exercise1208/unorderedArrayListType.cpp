//
//  unorderedArrayListType.cpp
//  Exercise1208
//
//  Created by Jacob Yeung on 10/4/23.
//

#include "unorderedArrayListType.hpp"
#include <stdio.h>
#include <iostream>
//#include "unorderedArrayListType.h"

unorderedArrayListType::unorderedArrayListType(int size) {
    maxSize = size;
    length = 0;
    list = new int[maxSize];
}

unorderedArrayListType::~unorderedArrayListType() {
    delete[] list;
}

void unorderedArrayListType::insert(int item) {
    if (length >= maxSize) {
        std::cout << "The list is full." << std::endl;
    } else {
        list[length] = item;
        length++;
    }
}

void unorderedArrayListType::removeAll(){
    this->length = 0;
}

void unorderedArrayListType::remove() {
    for (int i = 0; i < length; i++) {
        list[i] = list[i + 1];
    }

    length--;
}

void unorderedArrayListType::remove(int item) {
    int index = -1;
    for (int i = 0; i < length; i++) {
        if (list[i] == item) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        std::cout << "The item to be deleted is not in the list." << std::endl;
    } else {
        for (int i = index; i < length; i++) {
            list[i] = list[i + 1];
        }

        length--;
    }

}

void unorderedArrayListType::print(){
    for(int i = 0; i < length; i++){
        std::cout << list[i] << " ";
    }
}
