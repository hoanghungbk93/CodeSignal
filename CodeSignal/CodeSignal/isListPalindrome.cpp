#include "main.h"

bool isListPalindrome(ListNode<int> * l) {
    bool ret = true;
    std::vector<int> vt;
    while(l!= NULL)
    {
        vt.push_back(l->value);
        l = l->next;
    }
    for(int i = 0; i< vt.size(); i++)
    {
        if(vt[i] != vt[vt.size() - 1 - i]){
          ret =false;  
            break;
        }
    }
    return ret;
}