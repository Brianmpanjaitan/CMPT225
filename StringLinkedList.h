#include <cstdlib>
#include <iostream>
#include <string>
#include "stringNode.h"
using std::string;
using namespace std;

class StringLinkedList              // a linked list of strings
{			        
public:
  StringLinkedList();				        // empty list constructor
  ~StringLinkedList();			                // destructor
  bool empty() const;				        // is list empty?
  const string& front() const;		                // get front element
  void addFront(const string& e);		        // add to front of list
  void removeFront();				        // remove front item list
  int size();
private:
  StringNode* head;				        // pointer to the head of list
};