/*
301332589  bpanjait@sfu.ca  Brian Panjaitan
CMPT 225 Fall 2018
*/

#include <string>
#include <iostream>
#include "linkedList.h"

using namespace std;

int compareList(linkedList list1, linkedList list2) //checks and returns the largest int in list1 that's not in list2
{
    if(list1.empty())
    {
        return 0;
    }

    int num = list1.findLargest();

    while(list2.findNum(num) == 1)
    {
        list1.removeNode(num);
        num = list1.findLargest();
    }
    return num;
}

int main()
{
    linkedList list1;
	linkedList list2;

    int x;
    cin >> x;
    while(!cin.eof())
    {
        if(x != 0)
        {
            list1.add(x);
        }
        else
        {
            while(!cin.eof())
            {
                cin >> x;
                list2.add(x);
            }
        }
        cin >> x;
    }

    cout << "301332589  bpanjait  Brian Panjaitan" << endl;

    if(list1.empty() == 1)
    {
        cout << "None" << endl;
    }

    else if(list2.empty() == 1)
    {
        cout << list1.findLargest() << endl;
    }

    else
    {
        if(compareList(list1, list2) == 0)
        {
            cout << "None" << endl;
        }
        else
        {
            cout << compareList(list1, list2) << endl;
        }
    }
}