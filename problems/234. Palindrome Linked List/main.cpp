
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

bool isPalindrome(ListNode *head)
{
    ListNode *current = head;
    std::vector<int> arr;
    while (current != nullptr)
    {
        arr.push_back(current->val);
        current = current->next;
    }
    int j = arr.size() - 1;
    int i = 0;
    while (i < j)
    {
        if (arr[i] != arr[j])
            return false;
        i++;
        j--;
    }
    return true;
}

ListNode *createLinkedList(const std::vector<int> &values)
{
    ListNode *head = nullptr;
    ListNode *prev = nullptr;
    for (int val : values)
    {
        ListNode *newNode = new ListNode(val);
        if (!head)
            head = newNode;
        if (prev)
            prev->next = newNode;
        prev = newNode;
    }
    return head;
}

void deleteLinkedList(ListNode *head)
{
    while (head)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    int n;
    std::cout << "Enter the number of elements in the linked list: ";
    std::cin >> n;

    std::vector<int> values(n);
    std::cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; ++i)
    {
        std::cin >> values[i];
    }

    ListNode *head = createLinkedList(values);
    std::cout << "Is the linked list a palindrome? " << (isPalindrome(head) ? "Yes" : "No") << std::endl;
    deleteLinkedList(head);

    return 0;
}
