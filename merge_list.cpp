#include<iostream>
using namespace std;

class Solution {
    struct ListNode {
    int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
    public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* answer;
        ListNode* current;
        current = answer;
        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                current->next = list1;
                list1 = list1->next;
            }
            else{
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        if(list1 != NULL){
            while(list1 != NULL){
                current->next = list1;
                current = current->next;
                list1 = list1->next;
            }
        }
        else if(list2 != NULL){
            while(list2 != NULL){
                current->next = list2;
                current = current->next;
                list2 = list2->next;
            }
        }
        return answer->next;
    }
};
