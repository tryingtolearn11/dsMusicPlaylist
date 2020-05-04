#include<iostream>
using namespace std;

class Node{
  public:
    string song;
    string artist;
    Node* next;

  Node() {
    song = "no song";
    artist = "no artist";
    next = NULL;
  }

  Node (string k, string d) 
  {
    song = k;
    artist = d;
  }
};

class SinglyLinkedList {
  public:
    Node* head;

    SinglyLinkedList() 
    {
      head = NULL;
    }

    SinglyLinkedList(Node* n) 
    {
      head = n;
    }

    void appendNode(Node*n)
    {
      if (head == NULL)
      {
        head = n;
        cout << "Node appended" << '\n';
      }
      else
      {
        Node* ptr = head;
        while (ptr->next!=NULL)
        {
          ptr = ptr->next;
        }
        ptr->next = n;
        cout << "Node appended" << '\n';
      }
    }
        void deleteSongs (Node *n, string s) {
        if (head == NULL) {
            cout << "The list is empty" << endl;
        }
        else if (head != NULL) {
            if (head->song == s) {
                head = head->next;
                cout << "Test node is unlinked" << s << endl;
            }
            else {
                Node *temp = NULL;
                Node *prevptr = head;
                Node *currentptr = head->next;
                while (currentptr!=NULL) {
                    if (currentptr->song == s){
                        temp = currentptr;
                        currentptr=NULL;
                    }
                    else {
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                    if (temp != NULL) {
                        prevptr->next=temp->next;
                        cout << "Node is unliked" << s << endl;
                    }
                    else {
                        cout << "No nodes exist" << s << endl;
                    }
                }
            }
        }          
    }


    void printList(string nameOfPlaylist)
    {
      if (head== NULL) {
        cout << "no nodes" << '\n';
      }
      else {
        cout << nameOfPlaylist << ": ";
        Node* temp = head;
        while(temp!=NULL)
        {
          cout << "( Song: " << temp->song << " , "<< "Artist: " << temp->artist << ") ---> ";
          temp = temp->next;
        }
      }
    }

};
