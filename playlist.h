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
