#include <iostream>
#include <vector>

struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

int countNodes(Node* head) {
    if(!head || !head->next || !head->next->next){ 
        return 0;
    }

    int count =0;
    Node* prev = head;
    Node*curr = head->next;
    Node* next = curr->next;

    while(next){
        if(curr->data > prev->data && curr->data > next->data){
            count++;
        }
        prev=curr;
        curr=next;
        next=next->next;
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> elements[i];
    }
    if (n != elements.size()) {
        throw std::runtime_error("Number of elements does not match the size of the list");
    }
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int elem : elements) {
        Node* newNode = new Node(elem);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    int result = countNodes(head);
    std::cout << result << std::endl;
    return 0;
}