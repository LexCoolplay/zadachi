/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.cpp
 * Author: User
 * 
 * Created on 28 ноября 2017 г., 9:56
 */

#include "LinkedList.h"

LinkedList::LinkedList(int x) {
    this->head=this;
    this->value=value;
}
LinkedList::value(int x){
    this->value=value;
}
LinkedList::value(){
    return this->value;
}
LinkedList::append(int x){
    LinkedList* temp=this;
    while(this->next){
        temp=this->next;
    }
        this->next=new LinkedList(x);
        
}


