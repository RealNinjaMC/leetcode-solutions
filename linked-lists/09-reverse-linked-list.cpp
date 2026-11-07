#include <algorithm>
#include <array>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

#ifdef LOCAL_TEST
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int value, ListNode* following = nullptr) : val(value), next(following) {}
};
#endif

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previous = nullptr;
        while (head != nullptr) {
            ListNode* following = head->next;
            head->next = previous;
            previous = head;
            head = following;
        }
        return previous;
    }
};
#ifdef LOCAL_TEST
#include <iostream>
#include <stdexcept>

void expect(bool result, const string& test) {
    if (!result) throw runtime_error(test);
}

int main() {
    Solution solution;

    ListNode third(3), second(2,&third), first(1,&second);
    ListNode* head = solution.reverseList(&first);
    expect(head == &third && third.next == &second && second.next == &first && first.next == nullptr, "reverse links and terminate tail");
    head = solution.reverseList(head);
    expect(head == &first && first.next == &second && second.next == &third && third.next == nullptr, "reverse twice restores nodes");
    ListNode only(7);
    expect(solution.reverseList(&only) == &only && only.next == nullptr, "singleton");
    expect(solution.reverseList(nullptr) == nullptr, "empty list");
    cout << "PASS 09 Reverse Linked List: 4 cases\n";
    return 0;
}
#endif
