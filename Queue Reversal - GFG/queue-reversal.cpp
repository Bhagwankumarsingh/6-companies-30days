//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // vector<int>arr;
    // while(!q.empty()){
    //     int x=q.front();
    //     q.pop();
    //     arr.push_back(x);
    // }
    // queue<int>ansq;
    // for(int i=arr.size()-1;i>=0;i--){
    //     ansq.push(arr[i]);
    // }
    // return ansq;
    
    // using stack 
     stack<int>s;
     while(!q.empty()){
         int x=q.front();
         s.push(x);
         q.pop();
     }
     queue<int>ansq;
     while(!s.empty()){
         ansq.push(s.top());
         s.pop();
     }
     return ansq;
}