#include <iostream>

template<class T> class Node {
public:
    Node* next;
    T value;
};

template<class T> class LinkedList {
public:
    Node* head = Node<T>(0, NULL);
    friend std::ostream& operator<<(std::ostream& os, LinkedList<T>& li) 
    {
        Node* tmp = head;
        while (tmp->next != NULL) {
            os << tmp->value << ", ";
            tmp = &tmp->next; 
        }
    }
};


int main(int argc, char **argv) {
    LinkedList<int> li;
}