#include<iostream>
using namespace std;

struct node
{
  string song;
  string artist;
  node* next;
};

class Linklist 
{
  private:
    node* L; //head
    size_t listSize;
  public:
    Linklist();
    void insertNode(node* newNode);
    void removeNode(int position );
    void printList();
};


