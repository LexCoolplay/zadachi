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
    this->_value=x;
}
LinkedList::value(int x){
    this->_value=x;
    return 0;
}
LinkedList::value(){
    return this->_value;
}
LinkedList::append(int x){
    LinkedList* temp=this;
    while(this->_next){
        temp=this->_next;
    }
        this->_next=new LinkedList(x);
        
}


