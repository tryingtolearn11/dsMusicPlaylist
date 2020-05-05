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
  string k, d, b, v, e, g, nameOfPlaylist;
  Node* n1 = new Node();\
  Node* n2 = new Node();\
  Node* n3 = new Node();\
  
          k = "bts";
          d = "bts";
          b = "exo";
          v = "exo";
          e = "got7";
          g = "got7";
          n1->song = k;
          n1->artist = d;
          s.appendNode(n1);
          n2->song = b;
          n2->artist = v;
          s.appendNode(n2);
          n3->song = e;
          n3->artist = g;
          s.appendNode(n3);
          
          string w = "man";
          s.printList(w);
          
          s.skipSong(0);
          s.skipSong(1);
          s.skipSong(2);
          cout << endl;
          
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
        
            
          
      



    return 0;
  
 
  

}