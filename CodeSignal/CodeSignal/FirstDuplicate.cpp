#include "main.h"
int firstDuplicate(std::vector<int> a) {
    int min = 100000;
    map<int, int> t;
    for (int i = 0; i < a.size(); i++)
    {
        if (t.find(a[i]) != t.end()) 
        {
            if (i < min) 
                min = i;
        } 
        else 
        {
            t[a[i]] = 1;
        }
    }
    
    if (min != 100000)
        return a[min];
    else
        return -1;
}