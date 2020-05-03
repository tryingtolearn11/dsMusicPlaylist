#include <iostream>
#include "playlist.h"
using namespace std;

Linklist::Linklist()
{
    L -> song = "head no song";
    L -> artist = "head no artist";
    L -> next = NULL;
    listSize = 0;
}
void Linklist::printList()
{
  node* p = L;
  while(p->next !=NULL) {
    cout << p->song << '\n';
    cout << p->artist << '\n';
    p = p->next;
  }
  cout << '\n';
}

void Linklist::insertNode(node* newNode)
{
  //If list is empty
 if (L == NULL) {
   L = newNode;
   listSize++;
 }
 node* P = new node;
 P->next = L;
 L= P;

}




int main() {
node * A = new node;
A -> song = "We Are";
A -> artist = "Vertical Horizon";

Linklist mylist;
mylist.insertNode(A);
mylist.printList();
}