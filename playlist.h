#include<iostream>
using namespace std;
#include <string>
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
        cout << "Song added" << '\n';
      }
      else
      {
        Node* ptr = head;
        while (ptr->next!=NULL)
        {
          ptr = ptr->next;
        }
        ptr->next = n;
        cout << "Song added" << '\n';
      }
    }
  
    void deleteSongs (string s) {
        if (head == NULL) {
            cout << "The playlist is empty" << endl;
        }
        else if (head != NULL) {
            if (head->song == s) {
                head = head->next;
                cout << s << " is removed " << endl;
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
                        cout << "Song is unlinked" << s << endl;
                    }
                    else {
                      cout << "There are no songs with " << s <<endl;
                    }
                }
            }
          }
    }
                   
  
    void printList(string nameOfPlaylist)
    {
      if (head== NULL) {
        cout << "no songs" << '\n';
      }
      else {
        cout <<"Playlist : " << nameOfPlaylist << '\n';
        Node* temp = head;
        while(temp!=NULL)
        {
          cout << "Song : " << temp->song << ",  Artist : " << temp->artist << '\n';
          //cout << "( Song: " << temp->song << " , "<< "Artist: " << temp->artist << ") ---> " << endl;
          temp = temp->next;
        }
      }
    }
    
    void skipSong(int playIndex)
    {
		if (head== NULL) {
			cout << " Playlist is empty " << '\n';
        }
		else {
			Node* newer = head;
			int x = 0; 
			while (newer != NULL)  {  
				if (x == playIndex) {
					cout << "Now Playing" << endl;
					cout << "Song: " << newer->song << endl;
					cout << "Artist: " << newer->artist << endl;
				}
				x++;  
				newer = newer->next;  
			}
		} 
    }

};