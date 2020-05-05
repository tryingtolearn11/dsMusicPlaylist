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
      cout << "1. Add new song to playlist" << '\n';
      cout << "2. Print playlist" << '\n';
      cout << "3. Delete song from the playlist" << endl;
      cout << "4. Edit Playlist Name" << '\n';
      cout << "5. Start Playlist" << '\n';
      cin >> option;
      Node* n1 = new Node();
      if (option == 1) {
        cin.get();
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
        cout << "Enter name of the song to delete " << endl;
        cin.get();
        getline(cin, a);
        s.deleteSongs(a);
        cout << "Updated playlist ";
        s.printList(nameOfPlaylist);
      }
      if (option == 4)
      {
        cout << "Enter Name of your new Playlist" << endl;
        cin.get();
        getline(cin, nameOfPlaylist);
      }
      if (option == 5)
      {int playIndex = 0;
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
            
					}while (playOption != 0);
      }

      
      
  } while(option!=0);

    return 0;
}
