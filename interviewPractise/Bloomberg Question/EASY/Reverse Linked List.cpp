//
//  Reverse Linked List.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/11/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>



struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};



ListNode* reverseList(ListNode* head) {
    
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while(curr!=nullptr){
        ListNode* next = curr->next;
        curr->next= prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
