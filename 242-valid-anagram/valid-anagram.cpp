class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vt1(26,0);
        vector<int> vt2(26,0);
        for(char ch:s){
            int idx=ch-'a';
            vt1[idx]++;
        }for(char ch:t){
            int idx=ch-'a';
            vt2[idx]++;
    
         }
         for(int i=0; i<26; i++){
            if(vt1[i]!=vt2[i]){
                return false;
            }
         }
         return true;
        }
};