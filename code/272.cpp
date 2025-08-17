#include<bits/stdc++.h>
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;
Node* createList(int arr[], int n) {
    if (n == 0) return NULL;
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = arr[0];
    head->prev = NULL;
    head->next = NULL;
    Node* cur = head;
    for (int i = 1; i < n; i++) {
        Node* node = (Node*)malloc(sizeof(Node));
        node->data = arr[i];
        node->prev = cur;
        node->next = NULL;
        cur->next = node;
        cur = node;
    }
    return head;
}
Node* reverseList(Node* head) {
    if (head == NULL || head->next == NULL) return head;
    Node* cur = head;
    Node* temp = NULL;
    while (cur != NULL) {
        // 交换prev和next指针
        temp = cur->prev;
        cur->prev = cur->next;
        cur->next = temp;
        cur = cur->prev;
    }
        if (temp != NULL) {
        head = temp->prev;
    }
    return head;
}
void printList(Node* head) {
    Node* cur = head;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    Node* head = createList(arr, n);
    printList(head);
    head = reverseList(head);
    printList(head);
    return 0;
}