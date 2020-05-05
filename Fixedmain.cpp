#include <iostream>
#include "playlist.h"
using namespace std;

int main()
{
  SinglyLinkedList s;
  string k, d, a, nameOfPlaylist;
  int option;

  do {
      cout << '\n' << "What action to perform? " << "Choose the number, 0 to Exit" << '\n';
      cout << "1. add new song to playlist" << '\n';
      cout << "2. Print playlist" << '\n';
      cout << "3. Delete song from the playlist" << endl;

      cin >> option;
      Node* n1 = new Node();
      if (option == 1) {
        cout << "Enter Name of your new Playlist" << endl;
        cin.get();
        getline(cin, nameOfPlaylist);
        //cin.get();
        cout << "Enter Song name:" << endl;
        getline(cin, k);
        cout << "Enter artist name:" << endl;
        getline(cin, d);
        n1->song = k;
        n1->artist = d;
        s.appendNode(n1);
      }
      if (option == 2) {
        s.printList(nameOfPlaylist);
      }
      if (option == 3) {
        cout << "Enter what you want to delete" << endl;
        cin.get();
        getline(cin, a);
        s.deleteSongs(a);
        cout << "New playlist ";
        s.printList(nameOfPlaylist);
      }
      
  } while(option!=0);

    return 0;
}