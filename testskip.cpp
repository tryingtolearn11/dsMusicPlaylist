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
  
    void deleteSongs ( string s) {
        if (head == NULL) {
            cout << "The list is empty" << endl;
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
          cout << "( Song: " << temp->song << " , "<< "Artist: " << temp->artist << ") ---> " << endl;
          temp = temp->next;
        }
      }
    }
    
    void skipSong(int playIndex)
    {
		if (head== NULL) {
			cout << "no nodes" << '\n';
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

int main()
{
  SinglyLinkedList s;
  string k, d, a, b, nameOfPlaylist;
  int option;
  do {
      cout << '\n' << "What action to perform? " << "Choose the number, 0 to Exit" << '\n';
      cout << "1. add new song to playlist" << '\n';
      cout << "2. Print playlist" << '\n';
      cout << "3. Delete song from the playlist" << endl;
      cout << "4. Start Playlist" << endl;

      cin >> option;
      Node* n1 = new Node();
      if (option == 1) {
        cout << "Enter Name of your new Playlist" << '\n';
        cin >> nameOfPlaylist;
        cout << "Enter Song name: " << endl;
        cin >> k;
        cout << "Enter artist name:  " << endl;
        cin >> d;
        n1->song = k;
        n1->artist = d;
        s.appendNode(n1);
      }
      if (option == 2) {
        s.printList(nameOfPlaylist);
        cout << endl;
      }
      if (option == 3) {
        cout << "Enter what you want to delete" << endl;
        cin >> a;
        s.deleteSongs(a);
        cout << "New playlist ";
        s.printList(nameOfPlaylist);
        cout << endl;
      }
      if (option == 4) {
        int playIndex = 0;
          int playOption;
          s.skipSong(playIndex);
                do {
					cout << "Choose action to perform: (Press 0 to exit.)" << endl;
					cout << "1. Next Song" << endl;
					cout << "2. Previous Song" << endl;
					cin >> playOption;
						if (playOption == 0) {
							break;
						}
						if (playOption == 1) {
							playIndex++;
							s.skipSong(playIndex);
						}
						if (playOption == 2) {
							playIndex--;
							s.skipSong(playIndex);
						}
						else {
							cout << "Not an option. Try again.";
						}
					}while (playOption != 0);
      }
      
      
  } while(option!=0);

    return 0;
}
