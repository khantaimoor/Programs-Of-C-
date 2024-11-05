// // Reverse a Linked List: Given the head of a singly linked list,
// //  reverse the list and return the reversed list.
// #include <iostream>
// using namespace std;

// class ListNode {
// public:
//     int val;
//     ListNode *next;

//     ListNode(int x) : val(x), next(nullptr) {} // Constructor for easy node creation

//     void show() {
//         ListNode* temp = this;
//         while (temp != nullptr) {
//             cout << temp->val << " ";
//             temp = temp->next; // Move to the next node
//         }
//         cout << endl; // Print a newline at the end
//     }
// };

// // Function to reverse the linked list
// ListNode* reverseList(ListNode* head) {
//     ListNode* prev = nullptr;
//     ListNode* current = head;
//     ListNode* next = nullptr;

//     while (current != nullptr) {
//         next = current->next; // Store next node
//         current->next = prev; // Reverse the link
//         prev = current;       // Move prev and current one step forward
//         current = next;
//     }
//     return prev; // New head of the reversed list
// }

// int main() {
//     // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
//     ListNode* head = new ListNode(1);
//     head->next = new ListNode(2);
//     head->next->next = new ListNode(3);
//     head->next->next->next = new ListNode(4);
//     head->next->next->next->next = new ListNode(5);

//     cout << "Original list: ";
//     head->show();

//     // Reverse the linked list
//     head = reverseList(head);

//     cout << "Reversed list: ";
//     head->show();

//     // Free memory (not shown here for brevity)
//     return 0;
// }

