//
//  arrayListType.cpp
//  Exercise1208
//
//  Created by Jacob Yeung on 10/4/23.
//

#include "unorderedArrayListType.hpp"
#include "arrayListType.hpp"
#include <iostream>

arrayListType::arrayListType(int size): unorderedArrayListType(size) {
}

arrayListType::~arrayListType() {
    unorderedArrayListType::~unorderedArrayListType();
}

void arrayListType::removeAll(){
    unorderedArrayListType::removeAll();
}

void arrayListType::print(){
    unorderedArrayListType::print();
}

void arrayListType::remove() {
    unorderedArrayListType::remove();
}
void arrayListType::remove(int item) {
    unorderedArrayListType::remove(item);
}

void arrayListType::insert(int item) {
    for(int i = 0; i < this->length; i++){
        if(list[i] == item){
            return;
        }else{
            if(item < this->list[i]){
                for(int j = this->length; j > i; j--){
                    list[j] = list[j - 1];
                }
                list[i] = item;
                this->length++;
                return;
            }
        }
    }
    unorderedArrayListType::insert(item);
}
