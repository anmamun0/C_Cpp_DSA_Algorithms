#include <bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *Input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *MyLeft;
        Node *MyRight;
        if (l == -1)
        {
            MyLeft = NULL;
        }
        else
        {
            MyLeft = new Node(l);
        }
        if (r == -1)
        {
            MyRight = NULL;
        }
        else
        {
            MyRight = new Node(r);
        }
        f->left = MyLeft;
        f->right = MyRight;

        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    return root;
}
void Print_left(Node *root)
{
    if(root == NULL)return;
    
    if(root->left)
    {
        Print_left(root->left);
    }
    else if(root->right)
    {
        Print_left(root->right);
    }
    cout << root->val <<  " ";

}
void Print_right(Node *root)
{
    if(root == NULL)return;

    if(root->right)
    {
         cout << root->right << " ";
         Print_right(root->right);
    }
    else if(root->left)
    {
        cout << root->left->val << " ";
        Print_right(root->left);
    }

}

int main()
{
    Node *root = Input_tree();
    if(root->left)
    {
        Print_left(root);
    }
    
    else if(root->right)
    {
        Print_right(root);
    }
 
    
    return 0;
}





























// int main()
// {
// //     vector<vector<int>> v;
// //     v[0].push_back(1);
// //     v[0].push_back(2); 
// //     v[0].push_back(3);

// //     v[1].push_back(4);
// //     v[1].push_back(5);
// //     v[1].push_back(6);

// //     cout << v[0][1] << endl;
// char a = '2';
// cout << int(a) - 48;






// return 0;
// }