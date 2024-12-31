#include <iostream>
using namespace std;


class Node {
    public :
        int data;
        Node* address;

        Node(int data) {
            this -> data = data;
            this -> address = nullptr;
        }
};


int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = sizeof(arr)/sizeof(arr[0]);

    Node* Head;
    Head = nullptr;

    for (int i = 0; i < n; i++) {
        if (Head == nullptr) {
            Head = new Node(arr[i]);
        } else {
            Node* temp = Head;

            while(temp -> address != nullptr) {
                temp = temp -> address;
            }

            temp -> address = new Node(arr[i]);
            temp = nullptr;

        }
    }

    Node* temp = Head;
    while(temp) {
        cout << temp -> data << " ";
        temp = temp -> address;
    }
    cout << endl;

    Node* current = Head;
    temp = nullptr;

    while(current) {
        temp = current -> address;
        cout << "The node with data " << current -> data << " is being deleted." << endl;
        delete current;
        current = temp;   
    }

    Head = nullptr;

    return 0;
}