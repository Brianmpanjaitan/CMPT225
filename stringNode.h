#include <cstdlib>
#include <iostream>
#include <string>
using std::string;
using namespace std;

class StringNode                  // a node in a list of strings
{				        
private:
  string elem;				                // element value
  StringNode* next;				        // next item in the list

  friend class StringLinkedList;		        // provide StringLinkedList access
};