

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
{
    ListNode *prevA = nullptr, *nodeB = nullptr, *lastList2 = list2;

    ListNode *current = list1;
    for (int i = 0; i < a - 1; ++i)
    {
        current = current->next;
    }
    prevA = current;

    for (int i = 0; i < b - a + 2; ++i)
    {
        current = current->next;
    }
    nodeB = current;

    while (lastList2->next != nullptr)
    {
        lastList2 = lastList2->next;
    }
    prevA->next = list2;
    lastList2->next = nodeB;

    return list1;
}
