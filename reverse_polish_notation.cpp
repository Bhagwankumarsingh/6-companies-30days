// leetcode-150.




class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>s;
        for(int i=0;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                s.push(stoi(tokens[i]));
                continue;
            }
            else{
                long long a=s.top();
                s.pop();

                long long b=s.top();
                s.pop();

                if(tokens[i]=="+") s.push(a+b);
                else if(tokens[i]=="-") s.push(b-a);
                else if(tokens[i]=="*") s.push(a*b);
                else if(tokens[i]=="/") s.push(b/a);
            }
        }
        return s.top();
    }
};
