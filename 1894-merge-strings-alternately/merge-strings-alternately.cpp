class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int n1=word1.size();
        int n2=word2.size();
        string new_string="";
        while(i<n1 && i<n2){
            new_string+=word1[i];
            new_string+=word2[i];
            i++;
        }
        while(i<n1){
            new_string+=word1[i];
            i++;
        }
        while(i<n2){
            new_string+=word2[i];
            i++;
        }
        return new_string;        
    }
};