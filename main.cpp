#include <iostream>
#include "playlist.h"
using namespace std;



int main()
{
  SinglyLinkedList s;
  string k, d, nameOfPlaylist;
  int option;
  do {
      cout << '\n' << "What action to perform?" << "Choose the number, 0 to Exit" << '\n';
      cout << "1. add new song to playlist" << '\n';
      cout << "2. Print playlist" << '\n';

      cin >> option;
      Node* n1 = new Node();\
      cout << "Enter Name of your new Playlist" << '\n';
          getline(cin,nameOfPlaylist);

      switch(option)
      {
        case 0:
          break;
        case 1:
          cout << "Enter Song name  " << '\n';
            getline(cin,k);
          cout << "Enter artist name  " << '\n';
            getline(cin,d);
          n1->song = k;
          n1->artist = d;
          s.appendNode(n1);
        case 2:
        s.printList(nameOfPlaylist);
        case 3:
        cout << "Enter what you want to delete" << endl;
        getline(cin, a);
        s.deleteSongs(a);
        case 4:
        s.printList(nameOfPlaylist);
      }

      }
          
      


  } while(option!=0);

    return 0;
  
 
  

}
