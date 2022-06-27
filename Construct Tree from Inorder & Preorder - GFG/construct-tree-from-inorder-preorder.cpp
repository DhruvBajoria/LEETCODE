// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[in[i]]=i;
        }
        
        Node* root=tree(pre,0,n-1,in,0,n-1,mp);
        return root;
        // Code here
    }
    
    Node* tree(int pre[],int prestart,int preend,int in[],int instart,int inend,map<int,int>&mp)
    {
        if(prestart>preend||instart>inend)
        {return NULL;}
        Node* root=new Node(pre[prestart]);
        int inroot=mp[root->data];
        int numsleft=inroot-instart;
        
        root->left=tree(pre,prestart+1,prestart+numsleft+1,in,instart,inroot-1,mp);
        root->right=tree(pre,prestart+numsleft+1,preend,in,inroot+1,inend,mp);
        return root;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends