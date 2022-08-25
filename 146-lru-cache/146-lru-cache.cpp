class Node{
    public:
    int key;
    int val;
    Node *prev;
    Node *next;
    Node(int key,int val)
    {
        this->key=key;
        this->val=val;
       
    }
};


class LRUCache {
public:
    
   Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    int capacity;
    unordered_map<int,Node*>m;
    LRUCache(int capacity) {
        this->capacity=capacity;
        head->next=tail;
        tail->prev=head;
        
    }
    void deleten(Node*currnode)
    {
        Node*prevnode=currnode->prev;
        Node*nextnode=currnode->next;
        prevnode->next=nextnode;
        nextnode->prev=prevnode;
    }
    
    void insertn(Node*currnode)
    {
        currnode->next=head->next;
        currnode->prev=head;
        currnode->next->prev=currnode;
        head->next=currnode;
    }
    
    int get(int key) {
        if (m.find(key)==m.end())
            return -1;
        Node *x=m[key];
        deleten(x);
        insertn(x);
        return x->val;
    }
    
    void put(int key, int value) {
    if(m.find(key) != m.end()){
            Node* curNode = m[key];
            m.erase(key);
            deleten(curNode);
        }
        if(m.size() == capacity){
            m.erase(tail->prev->key);
            deleten(tail->prev);
        }
        insertn(new Node(key,value));
        m[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */