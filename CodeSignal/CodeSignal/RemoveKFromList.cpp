#include "main.h"

// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
ListNode<int> * removeKFromList(ListNode<int> * l, int k) {
   if (l == NULL)
    return NULL;
ListNode<int> *p = l, *pre = NULL;
while(p!=NULL)
{
  
	if(p->value == k)
	{
        ListNode<int> *temp = p;
        if(pre == NULL)
        {    
            l = l->next;
            p = p->next;
            delete temp;
        continue;
        }
        pre->next = p->next;
        p = p->next;
        delete temp;
        continue;
    }
	pre = p;
	p = p->next;
}
  return l;
}
