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

ListNode *createListFromInput()
{
    ListNode *head = nullptr;
    ListNode *tail = nullptr;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        ListNode *newNode = new ListNode(val);
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
}

ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *curr = head;
    while (curr != nullptr)
    {
        ListNode *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

void printList(ListNode *head)
{
    ListNode *curr = head;
    while (curr != nullptr)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}
int main()
{

    ListNode *head = createListFromInput();

    cout << "Original list: ";
    printList(head);

    ListNode *reversedHead = reverseList(head);

    cout << "Reversed list: ";
    printList(reversedHead);

    return 0;
}