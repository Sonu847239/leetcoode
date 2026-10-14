class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int md=0;

        for(char ch :s){
            if(ch=='('){
                count++;
            }else if(ch==')'){
                count--;
            }
            md=max(md,count);
        }
    return md;
        
    }
    
};