/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.h
 * Author: User
 *
 * Created on 28 ноября 2017 г., 9:56
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {
public:
    LinkedList(int x);
    void append(int x);
    void insert(int x);
    void value(int x);
    int value();
private:
    int value;
    LinkedList* next;
    LinkedList* head;
};

#endif /* LINKEDLIST_H */

