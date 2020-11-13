//
//  Delete Node in a Linked List.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(nullptr) {}
};

void deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

//int main(int argc, const char* argv[]){
//    return 0;
//}
