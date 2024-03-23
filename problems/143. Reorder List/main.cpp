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
    return head;
}

void reorderList(ListNode *head)
{
    ListNode *temp = head;
    vector<int> stack;
    while (head)
    {
        stack.push_back(head->val);
        head = head->next;
    }
    head = temp;
    int i = 0;
    int j = stack.size() - 1;
    int k = 0;
    while (head)
    {
        if (k % 2 != 0)
        {
            head->val = stack[j];
            j--;
        }
        else
        {
            head->val = stack[i];
            i++;
        }
        k++;
        head = head->next;
    }
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

    int t;
    cin >> t;
    while (t--)
    {
        ListNode *head = createListFromInput();
        reorderList(head);
        printList(head);
    }
    return 0;
}