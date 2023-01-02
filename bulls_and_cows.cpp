// leetcode ->(299).



class Solution {
public:
    string getHint(string secret, string guess) {
        int bool_cnt=0;
        vector<int>se(10);
        vector<int>gu(10);
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i]) bool_cnt++;
            else{
               se[secret[i]-'0']++;
               gu[guess[i]-'0']++;
            }
        }
        int cow_cnt=0;
        for(int i=0;i<10;i++){
             cow_cnt+=min(se[i],gu[i]);
        }
        string ans=to_string(bool_cnt)+'A'+to_string(cow_cnt)+'B';
        return ans;
    }
};
