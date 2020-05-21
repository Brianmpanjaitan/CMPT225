// Header file for linked list class 
// For Implementation Version 2

class linkedList
{
    public:
        linkedList();
        linkedList(const linkedList& lst);

        void add(int data);
        bool removeNode(int data );
        int findLargest();		
        bool empty();
        bool findNum(int data);
        
    private:
        struct node 
        {
            int data;
            node *next;
        };
        node *head;
        int size;
};
