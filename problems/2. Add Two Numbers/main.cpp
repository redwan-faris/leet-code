#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *head = new ListNode(0);

    function<void(ListNode *, ListNode *, ListNode *, int)> addTwoNumbersHelper =
        [&](ListNode *resultNode, ListNode *node1, ListNode *node2, int carry)
    {
        if (!node1 && !node2 && carry == 0)
        {
            return;
        }

        int val1 = node1 ? node1->val : 0;
        int val2 = node2 ? node2->val : 0;
        int sum = val1 + val2 + carry;

        resultNode->val = sum % 10;
        carry = sum / 10;

        if ((node1 && node1->next) || (node2 && node2->next) || carry != 0)
        {
            resultNode->next = new ListNode(0);
            addTwoNumbersHelper(resultNode->next, node1 ? node1->next : nullptr, node2 ? node2->next : nullptr, carry);
        }
    };

    addTwoNumbersHelper(head, l1, l2, 0);
    return head;
}

int main()
{
    int n1;
    cin >> n1;
    ListNode *l1_head = nullptr;
    ListNode *l1_current = nullptr;
    for (int i = 0; i < n1; ++i)
    {
        int val;
        cin >> val;
        ListNode *node = new ListNode(val);
        if (!l1_head)
        {
            l1_head = node;
            l1_current = node;
        }
        else
        {
            l1_current->next = node;
            l1_current = node;
        }
    }

    int n2;
    cin >> n2;
    ListNode *l2_head = nullptr;
    ListNode *l2_current = nullptr;
    for (int i = 0; i < n2; ++i)
    {
        int val;
        cin >> val;
        ListNode *node = new ListNode(val);
        if (!l2_head)
        {
            l2_head = node;
            l2_current = node;
        }
        else
        {
            l2_current->next = node;
            l2_current = node;
        }
    }

    ListNode *result = addTwoNumbers(l1_head, l2_head);

    while (result)
    {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    while (l1_head)
    {
        ListNode *temp = l1_head;
        l1_head = l1_head->next;
        delete temp;
    }
    while (l2_head)
    {
        ListNode *temp = l2_head;
        l2_head = l2_head->next;
        delete temp;
    }

    return 0;
}
